#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <unordered_set>
using namespace std;

int main(){

    long long N; cin >> N;

     // ベクトル
    vector<long long> X(5*N);
    for(int i=0; i<N*5; ++i){
        cin >> X.at(i);
    }

    sort(X.begin(), X.end());

    long long sum = 0;
    for(int i=N; i<4*N; ++i){
        sum += X.at(i);
    }

    double result =  sum*1.0 / (3*N);

    cout << result << endl;


    return 0;
}