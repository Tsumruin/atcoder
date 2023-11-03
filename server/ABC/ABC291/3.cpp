#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <unordered_set>
using namespace std;

int judge(long long num){
    if(num >= 0){
        return 0;
    }
    else{
        return 1;
    }
}

bool check(int num){
    if(num > 1){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    long long N; cin >> N;

    // ベクトル
    vector<char> S(N);
    for(int i=0; i<N; i++){
        cin >> S.at(i);
    }

    // 2×2×N×N要素の配列を宣言
    vector<vector<vector<vector<long long>>>> data(2, vector<vector<vector<long long>>>(2, vector<vector<long long>>(N+1, vector<long long>(N+1))));
    long long nowX = 0;
    long long nowY = 0;
    data.at(judge(nowX)).at(judge(nowY)).at(nowX).at(nowY) = 1;

    for(int i=0; i<N; ++i){
        char s = S.at(i);
        
        // cout << nowX << nowY << endl;

        if('R' == s){
            nowX += 1;
            data.at(judge(nowX)).at(judge(nowY)).at(abs(nowX)).at(abs(nowY)) += 1;
        }
        else if('L' == s){
            nowX -= 1;
            data.at(judge(nowX)).at(judge(nowY)).at(abs(nowX)).at(abs(nowY)) += 1;
        }
        else if('U' == s){
            nowY += 1;
            data.at(judge(nowX)).at(judge(nowY)).at(abs(nowX)).at(abs(nowY)) += 1;
        }
        else if('D' == s){
            nowY -= 1;
            data.at(judge(nowX)).at(judge(nowY)).at(abs(nowX)).at(abs(nowY)) += 1;
        }
        else{
            cout << "error" << endl;
            return 0;
        }

        if(check(data.at(judge(nowX)).at(judge(nowY)).at(abs(nowX)).at(abs(nowY)))){
            cout << "Yes" << endl;
            return 0;
        }

    }

    cout << "No" << endl;


    return 0;
}