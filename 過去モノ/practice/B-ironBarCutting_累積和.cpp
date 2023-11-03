#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

int main(){

    int N; cin >> N;

    long long dif = 0;

    vector<long long> A(N);
    vector<long long> com_sum(N+1, 0);
    for(int i = 0; i < N; ++i){
        cin >> A.at(i);
        com_sum.at(i+1) = com_sum.at(i) + A.at(i);
    }

    long long total = com_sum.at(N);
    long long minimum = total;
    for(int i=0; i<N; ++i){
        long long left = com_sum.at(i);
        long long right = total - left;
        minimum = min(minimum, abs(left - right));
    }

    cout << minimum << endl;

    return 0;
}