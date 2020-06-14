#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int X, N; cin >> X >> N;
    vector<int> p(N);

    bool flag = false;
    int start, lY, uY;
    int lc=0; 
    int uc=0;

    string S;

    // while ( getline(S, ' ') ){
    //     v.push_back(s);
    // }

    // for (const string& s : v){         // vの中身を出力
    //     cout << s << endl;
    // }

    for(int i=0; i<N; i++){
        cin >> p.at(i);
        if(X == p.at(i)){
            flag = true;
        }
    }
    
    if(!flag){
        cout << X << endl;
        return 0;
    }

    sort(p.begin(), p.end());

    for(int i=0; i<N; i++){
        if(p.at(i) == X){
            start = i;
            break;
        }
    }

    lY = X;
    uY=X;

    for(int i=start; i>=0; i--){
        if(p.at(i) != lY) break;
        lc++;
        lY--;
    }
    for(int i=start; i<N; i++){
        if(p.at(i) != uY) break;
        uc++;
        uY++;
    }

    if(lc <= uc){
        cout << lY << endl;
    }
    else{
        cout << uY << endl;
    }


    return 0;
}