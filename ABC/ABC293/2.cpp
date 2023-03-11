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

    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin >> A.at(i);
    }

    vector<int> check(N);
    for(int i=0; i<N; i++){
        check.at(i) = 0;
    }

    for(int i=0; i<N; i++){
        if(0 == check.at(i)){
            int call = A.at(i);
            int call_id = call - 1;
            check.at(call_id) = 1;
        }
    }

    int sum = 0;
    
    for(int i=0; i<N; i++){
        if(0 == check.at(i)) sum++;
    } 

    cout << sum << endl;
    for(int i=0; i<N; i++){
        if(0 == check.at(i)){
            cout << i+1 << " ";
        }
    } 


    return 0;
}