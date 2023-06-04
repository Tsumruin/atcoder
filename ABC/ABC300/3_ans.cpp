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

int main(){

    int H, W; cin >> H >> W;
    vector<vector<char>> C(H, vector<char>(W));

    int N = min(H, W);
    map<int, int> S;
    for(int i=1; i<=N; ++i){
        S[i] = 0;
    }

    for(int i=0; i<H; ++i){
        for(int k=0; k<W; ++k){
            cin >> C[i][k];
        }
    }

    for(int i=1; i<H-1; ++i){
        for(int k=1; k<W-1; ++k){
            // 今と左上と右上を見る
            if(C[i][k] == '#' && C[i-1][k-1] == '#' && C[i+1][k-1] == '#' && C[i+1][k+1] == '#' && C[i-1][k+1] == '#'){
                // 右下へ
                // cout << i+1 << "," << k+1 << endl;
                C[i][k] = '.';
                int iter = 1;
                while(1){
                    if(i+iter == H-1 || k+iter == W-1 || i-iter == 0 || k-iter == 0){
                        S[iter]++;
                        break;
                    }
                    if(C[i + iter][k + iter] != '#' || C[i - iter][k + iter] != '#' || C[i + iter][k - iter] != '#' ||  C[i - iter][k - iter] != '#'){
                        S[iter-1]++;
                        break;
                    }
                    C[i + iter][k + iter] = '.';
                    iter++;
                }
            }
        }
    }

    for(int i=1; i<=N; ++i){
        cout << S[i] << " ";
    }

    return 0;
}