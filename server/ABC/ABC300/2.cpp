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

    int H, W; cin >> H >> W;
    vector<vector<char>> A(H, vector<char>(W));
    vector<vector<char>> B(H, vector<char>(W));
    for(int i=0; i<H; ++i){
        for(int k=0; k<W; ++k){
            cin >> A[i][k];
        }
    }
    for(int i=0; i<H; ++i){
        for(int k=0; k<W; ++k){
            cin >> B[i][k];
        }
    }


    bool flag = false;

    for(int l=0; l<H; ++l){
        if(flag) break;

        for(int k=0; k<W; ++k){
            char tmp =  A[0][k];
            for(int i=0; i<H; ++i){
                if(i == H-1){
                    A[i][k] = tmp;
                }
                else{
                    A[i][k] = A[i+1][k];
                }
            }
        }

        for(int m=0; m<W; ++m){
            if(flag) break;

            for(int i=0; i<H; ++i){
                char tmp = A[i][0];
                for(int k=0; k<W; ++k){
                    if(k == W-1){
                        A[i][k] = tmp;
                    }
                    else{
                        A[i][k] = A[i][k+1];
                    }
                }
            }

            int count = 0;
            for(int i=0; i<H; ++i){
                for(int k=0; k<W; ++k){
                    if(A[i][k] == B[i][k]) count++;
                }
            }

            if(count == H*W){
                cout << "Yes" << endl;
                flag = true;
            }
        }
    }
    

    if(!flag){
        cout << "No" << endl;
    }

    return 0;
}