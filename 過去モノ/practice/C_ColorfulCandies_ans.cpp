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

    long long N, K; cin >> N >> K;
    vector<long long> c(300010);
    for(long long i=0; i<N; ++i){
        cin >> c.at(i);
    }

    map<long long, long long> cnt; 
    long long kinds = 0;
    long long ans = 0;

    for(long long i=0; i<K; ++i){
        if(0 == cnt[c[i]]) kinds++;
        cnt[c[i]]++;
    }

    ans = max(ans, kinds);


    for(long long i=K; i<N; ++i){
        if(1 == cnt[c[i-K]]) kinds--;
        cnt[c[i-K]]--;

        if(0 == cnt[c[i]]) kinds++;
        cnt[c[i]]++;
        ans = max(ans, kinds);
    }

    cout << ans << endl;


    return 0;
}
