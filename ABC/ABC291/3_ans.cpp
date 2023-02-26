#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <set>
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

    set<pair<long long, long long>> used;

    long long nowX = 0;
    long long nowY = 0;
    used.insert({nowX, nowY});

    for(auto const &s: S){
        if('R' == s){
            nowX += 1;
        }
        else if('L' == s){
            nowX -= 1;
        }
        else if('U' == s){
            nowY += 1;
        }
        else if('D' == s){
            nowY -= 1;
        }

        auto result = used.insert({nowX, nowY});

        if(!result.second){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}