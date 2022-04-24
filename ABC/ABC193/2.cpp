#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
using namespace std;

int main(){

    int N; cin >> N;
    int A, P, X;
    int tmp = 1e+9;
    bool flag = false;

    for(int i=0; i<N; i++){
        cin >> A >> P >> X; 
        if(X - A > 0 && P < tmp){
            tmp = P;
            flag = true;
        }
    }

    if(flag){
        cout << tmp << endl;
    }
    else{
        cout << -1 << endl;
    }

    return 0;
}