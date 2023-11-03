#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main(){

    string S; cin >> S;
    string T; cin >> T;

    if(S == "Y"){
        transform(T.begin(), T.end(), T.begin(), ::toupper);
        cout << T << endl;
    }
    else if(S == "N"){
        cout << T << endl;
    }
    

    return 0;
}