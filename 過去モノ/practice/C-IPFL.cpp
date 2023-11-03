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

int id(int num){ return num - 1; }

int main(){

    int N; cin >> N;
    string S; cin >> S;
    int Q; cin >> Q;

    for(int i=0; i<Q; ++i){
        int T, A, B; cin >> T >> A >> B;
        if(1 == T){
            char tmp = S[id(A)];
            S[id(A)] = S[id(B)];
            S[id(B)] = tmp;
        }
        else if(2 == T){
            string tmp = S.substr(0, N);
            S.replace(0, N, S.substr(N));
            S.replace(N, N, tmp);
        }
    }

    cout << S << endl;

    return 0;
}
