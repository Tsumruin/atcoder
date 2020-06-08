#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){

    int K; cin >> K;
    string S; cin >> S;

    if(S.size() <= K){
        cout << S << endl;
    }
    else{
        cout << S.substr(0, K) + "..." << endl;
    }

    return 0;
}