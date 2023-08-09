#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <unordered_set>
using namespace std;

int main(){

    long long N; cin >> N;

    vector<long long> A(N);
    for(long long i=0; i<N; ++i){
        cin >> A.at(i);
    }

    // long sum = 0;
    // for(int i=0; i<N-1; ++i){
    //     for(int k=i+1; k<N; ++k){
    //         sum += abs(A[i] - A[k]);
    //     }
    // }

    // cout << "norma:" << sum << endl;

    sort(A.begin(), A.end());

    long long sum1 = 0;
    for(long long i=1; i<N; ++i){
        long long tmp = abs(A[i-1] - A[i]);
        long long time = (N - i) * i;
        sum1 += tmp * time;
    }

    cout << sum1 << endl;

    return 0;
}
