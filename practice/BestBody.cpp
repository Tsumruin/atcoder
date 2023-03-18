#include <iostream>
#include <vector>
#include <iomanip> 
#include <functional>
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

int main(){

    long long N, S, T; cin >> N >> S >> T;
    long long W; cin >> W;

    vector<int> A(N);
    for(int i=0; i<N-1; ++i){
        cin >> A.at(i); 
    }

    long long weight = W;
    long long count = 0;

    if(S <= weight && weight <= T) count++;
    for(int i=0; i<N-1; ++i){
        weight += A.at(i);
        if(S <= weight && weight <= T) count++;
    }

    cout << count << endl;

    return 0;
}
