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

    string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int H, W; cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W));
    vector<vector<char>> res(H, vector<char>(W));

    for(int i=0; i<H; ++i){
        for(int k=0; k<W; ++k){
            int num; cin >> num;
            if(0 == num){
                res[i][k] = '.';
            }
            else{
                res[i][k] = str[num-1];
            }
        }
    }

    for(int i=0; i<H; ++i){
        for(int k=0; k<W; ++k){
            cout << res[i][k];
        }
        cout << "\n";
    }

    return 0;
}