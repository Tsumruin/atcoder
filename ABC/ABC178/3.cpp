#include <iostream>
#include <algorithm>
#define MOD 1000000007

using namespace std;

long long modpow(long long a, long long n, long long mod) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

int main(){

    long long N; cin >> N;
    unsigned long long r = 1;

    r *= N;
    r %= MOD;
    r *= (N - 1);
    r %= MOD;

    for(long long i=0; i<N-2; i++){
        r *= 10;
        r %= MOD;
    }

    cout << r << endl;

    // cout << modpow(2, N-1, 1000000007) << endl;

    return 0;
}