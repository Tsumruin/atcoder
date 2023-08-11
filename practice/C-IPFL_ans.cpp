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

    bool change = false;
    for(int i=0; i<Q; ++i){
        int T, A, B; cin >> T >> A >> B;
        if(2 == T){
            if(change) change = false;
            else change = true;
        }
        else if(1 == T){
            if(change){
                char switchA, switchB;
                if(A <= N){
                    switchA = S[id(A + N)];
                }
                else{
                    switchA = S[id(A - N)];
                }
                if(B <= N){
                    switchB = S[id(B + N)];
                }
                else{
                    switchB = S[id(B - N)];
                }
                
                if(A<= N) S[id(A + N)] = switchB;
                else S[id(A - N)] = switchB;

                if(B<= N) S[id(B + N)] = switchA;
                else S[id(B - N)] = switchA;
            }
            else{
                char tmp = S[id(A)];
                S[id(A)] = S[id(B)];
                S[id(B)] = tmp;
            }
        }
    }

    if(change){
        string tmp = S.substr(0, N);
        S.replace(0, N, S.substr(N));
        S.replace(N, N, tmp);
    }

    cout << S << endl;

    return 0;
}
