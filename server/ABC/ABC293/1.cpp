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

    string S; cin >> S;

    char tmp;
    for(int i=0; i<S.size(); i++){
        if(0 == i%2){
            tmp = S[i];
            S[i] = S[i+1];
            S[i+1] = tmp;
        }
    }

    cout << S << endl;

    return 0;
}