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

    long long  N, M, H, K; cin >> N >> M >> H >> K;
    string S; cin >> S;

    map<string,bool> item;

    for(long long i=0; i<M; ++i){
        long long x, y; cin >> x >> y;

        string title = to_string(x) + "," + to_string(y);

        item[title] = true;

    }

    long long live = H;
    long long x = 0;
    long long y = 0;

    bool flag = true;
    for(long long i=0; i<N; ++i){
        char command = S[i];
        if(command == 'R') x += 1;
        else if(command == 'L') x -= 1;
        else if(command == 'U') y += 1;
        else if(command == 'D') y -= 1;

        live--;
        if(live < 0){
            flag = false;
            break;
        }

        string position = to_string(x) + "," + to_string(y);

        if(live < K){
            if(item.count(position)){
                if(item[position]){
                    live = K;
                    item[position] = false;
                }
            }
        }

        // cout << position << endl;
        // cout << live << endl;


    }

    if(flag){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}
