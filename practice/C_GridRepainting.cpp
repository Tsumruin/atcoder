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


void printVector(const vector<int>& vec) {
    for (int value : vec) {
        cout << value << " ";
    }
    cout << endl;
}

void print2ndVector(const vector<vector<bool>> v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){

    int H, W; cin >> H >> W;

    vector<vector<char>> s(H, vector<char>(W));
    vector<vector<bool>> done(H, vector<bool>(W));
    for(int i=0; i<H; ++i){
        for(int k=0; k<W; ++k){
            cin >> s[i][k];
            done[i][k] = false;
            if(s[i][k] == '.') done[i][k] = true;
        }
    }

    for(int i=0; i<H; ++i){
        for(int k=0; k<W-1; ++k){
            char left = s[i][k];
            char right = s[i][k+1];
            if(left == '#' && right == '#'){
                done[i][k] = true;
                done[i][k+1] = true;
            }
        }
    }

    for(int k=0; k<W; ++k){
        for(int i=0; i<H-1; ++i){
            char up = s[i][k];
            char down = s[i+1][k];
            if(up == '#' && down == '#'){
                done[i][k] = true;
                done[i+1][k] = true;
            }
        }
    }

    bool flag = true;
    for(int i=0; i<H; ++i){
        for(int k=0; k<W-1; ++k){
            if(!done[i][k]){
                flag = false;
                break;
            }
        }
        if(!flag){
            break;
        }
    }

    if(flag){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }


    // print2ndVector(done);

    return 0;
}