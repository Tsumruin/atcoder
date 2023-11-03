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

    int N, K; cin >> N >> K;

    vector<long long> h(N);
    for(int i=0; i<N; ++i){
        cin >> h.at(i);
    }

    long long dp[100010];
    for(int i=0; i<100010; ++i) dp[i] = INF;
    
    dp[0] = 0;

    for(int i=1; i<N; ++i){
        for(int k=1; k<=K; ++k){
            if(i >= k){
                chmin(dp[i], dp[i-k] + abs(h[i] - h[i-k]));
            }
        }
    }

    cout << dp[N-1] << endl;

    return 0;
}
