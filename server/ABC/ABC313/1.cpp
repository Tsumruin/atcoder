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

    int N; cin >> N;

    vector<int> P(N);
    for(int i=0; i<N; ++i){
        cin >> P.at(i);
    }

    int tmp = P.at(0);
    bool flag = false;
    for(int i=1; i<N; ++i){
        if(tmp <= P.at(i)){
            tmp = P.at(i);
            flag = true;
        }
    }

    if(tmp > P.at(0)){
        cout << 1 + tmp - P.at(0) << endl;
    }
    else if(tmp == P.at(0) && flag){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }

    return 0;
}
