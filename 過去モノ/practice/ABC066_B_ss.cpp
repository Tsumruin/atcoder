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

    string S; cin >> S; // abcabc

    int S_length = S.length(); //6
    int S_half = S_length / 2;

    string str = S;
    int ss_length = -1;
    for(int i=0; i<S_half; ++i){
        bool miss = false;
        str = str.erase(str.length()-2, 2);
        int str_half = str.length() / 2;

        // cout << str << endl;

        for(int k=0; k<str_half; ++k){
            if(S.at(k) != S.at(str_half + k)){
                miss = true;
                break;
            }
        }
        if(!miss){
            ss_length = str.length();
            break;
        }
    }

    if(ss_length > 0){
        cout << ss_length << endl;
    }
    else{
        cout << 1 << endl;
    }

    return 0;
}