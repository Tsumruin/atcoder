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
    string S, T; cin >> S >> T;

    bool flag = true;
    for(int i=0; i<N; ++i){
        char a = S[i];
        char b = T[i];
        if(a == b){
            continue;
        }
        else if(a == 'o' && b == '0'){
            continue;
        }
        else if(a == '0' && b == 'o'){
            continue;
        }
        else if(a == '1' && b == 'l'){
            continue;
        }
        else if(a == 'l' && b == '1'){
            continue;
        }
        else{
            flag = false;
            break;
        }
    }
    
    if(flag){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}
