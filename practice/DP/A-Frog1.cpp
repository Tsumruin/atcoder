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

const long long INF = 1LL << 60;


/*
* change minimum 
* @param a Current minimum number
* @param b Against number
* @return boolean
*/
template<class T> inline bool chmin(T& a, T b) {
    if (a > b){
        a = b;
        return true;
    }
    return false;
}

/*
* change maximum
* @param a Current maximum number
* @param b Against number
* @return boolean
*/
template<class T> inline bool chmax(T& a, T b) {
    if (a < b){
        a = b;
        return true;
    }
    return false;
}

int main(){

    int N; cin >> N;

    vector<long long> h(N);
    for(int i=0; i<N; ++i){
        cin >> h.at(i);
    }

    long long dp[100010];
    for(int i=0; i<100010; ++i) dp[i] = INF;
    
    dp[0] = 0;

    for(int i=1; i<N; ++i){
        chmin(dp[i], dp[i-1] + abs(h[i] - h[i-1]));
        if(i > 1){
            chmin(dp[i], dp[i-2] + abs(h[i] - h[i-2]));
        }
    }

    cout << dp[N-1] << endl;

    return 0;
}
