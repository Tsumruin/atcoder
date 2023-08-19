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

    long long N; cin >> N;
    vector<long long> F(N), S(N);

    long long max_S = -1;
    long long max_S_id = -1;
    long long max_S_F = -1;
    for(long long i=0; i<N; ++i){
        cin >> F[i] >> S[i];
        if(S[i] >= max_S){
            max_S = S[i];
            max_S_id = i;
            max_S_F = F[i];
        } 
    }


    long long second_S = -1;
    for(long long i=0; i<N; ++i){
        if(i == max_S_id) continue;

        int act_S;
        if(F[i] == max_S_F){
            act_S = S[i] / 2;
        }
        else{
            act_S = S[i];
        }

        if(act_S >= second_S){
            second_S = act_S;
        } 
    }

    cout << max_S + second_S << endl;


    return 0;
}
