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
    vector<char> S(N);

    for(int i=0; i<N; ++i){
        cin >> S.at(i);
    }

    bool flag = false;
    for(int i=0; i<N; ++i){
        char str = S.at(i);
        if('x' == str){
            flag = false;
            break;
        }
        if('o' == str){
            flag = true;
        }
    }

    if(flag){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    

    return 0;
}
