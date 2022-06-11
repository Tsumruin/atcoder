#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <limits>
#include <climits>
#include <string>
#include <unordered_set>
using namespace std;

int main(){

    long long X, A, D, N; cin >> X >> A >> D >> N;

    long long Sn;
    long long dif_mae;
    long long dif_ima;
    for(int n = 1; n<=N; n++){
        Sn = A + D * (n - 1);
        if(n == 1){
            dif_mae = abs(Sn - X);
            // cout << "now:" << Sn << endl;
            continue;
        }
        dif_ima = abs(Sn - X);
        // cout << "now:" << Sn << "/dif_ima: " << dif_ima << endl;

        if(D >= 0 && dif_mae < dif_ima){
            cout << dif_mae << endl;
            return 0;
        }
        else if(D < 0 && dif_mae < dif_ima){
            cout << dif_mae<< endl;
            return 0;
        }
        dif_mae = dif_ima;
        if(X > Sn) n = abs(int(X / Sn));
        else n = abs(int(Sn / X));

    }

    if(N == 1){
        cout << abs(X - A) << endl;
    }
    else{
        cout << dif_ima << endl;
    }


    return 0;
}