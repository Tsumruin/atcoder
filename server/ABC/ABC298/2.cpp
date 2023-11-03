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

    vector<vector<int>> A(N+1, vector<int>(N+1));
    vector<vector<int>> B(N+1, vector<int>(N+1));

    for(int i=1; i<=N; i++){
        for(int k=1; k<=N; ++k){
            cin >> A[i][k];
        }
    }
    for(int i=1; i<=N; i++){
        for(int k=1; k<=N; ++k){
            cin >> B[i][k];
        }
    }

    vector<vector<int>> rotateA(N+1, vector<int>(N+1));
    for(int l=0; l<4; ++l){
        for(int i=1; i<=N; i++){
            for(int k=1; k<=N; ++k){
                rotateA[i][k] = A[N+1-k][i];        
            }
        }

        bool flag = true;
        for(int i=1; i<=N; i++){
            for(int k=1; k<=N; ++k){
                if(rotateA[i][k] == 1){
                    if(B[i][k] == 0){
                        flag = false;
                        break;
                    }
                }
            }
        }

        
        if(flag){
            cout << "Yes" << endl;
            return 0;
        }

        A = rotateA;
    }


    cout << "No" << endl;


    return 0;
}