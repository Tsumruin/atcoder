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
    for(int i=0; i<N; ++i){
        cin >> A.at(i);
    }

    for(int i=0; i<N; ++i){
        int num = A.at(i);
        if(0 == num % 2){
            cout << num << " ";
        }
    }

    return 0;
}