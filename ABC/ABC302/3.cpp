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

    int N, M; cin >> N >> M;

    vector<string> S(N);
    for(int i=0; i<N; ++i){
        cin >> S[i];
    }

    vector<vector<int>> check(N, vector<int>(N));
    for(int i=0; i<N; ++i){
        for(int k=0; k<N; ++k){
            int dif = 0;
            for(int iter=0; iter<M; ++iter){
                if(S[i][iter] != S[k][iter]){
                    dif++;
                }
            }
            check[i][k] = dif;
        }
    }

    bool flag1 = false;
    bool flag2 = false;
    for(int i=0; i<N; ++i){
        int judge = 0;
        for(int k=0; k<N; ++k){
            if(1 == check[i][k]){
                judge++;
            }
        }
        if(1 == judge){
            if(flag2){
                cout << "No" << endl;
                return 0;
            }
            else if(flag1){
                flag2 = true;
            }
            else{
                flag1 = true;
            }
        }
        else if(judge < 2){
            cout << "No" << endl;
            return 0;
        }

    }

    cout << "Yes" << endl;


    return 0;
}