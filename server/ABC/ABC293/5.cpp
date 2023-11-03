#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main(){
    unsigned long A, X, M; cin >> A; cin >> X; cin >> M;

    unsigned long long total = 0;

    int amari = A % M;

    for(unsigned long i=0; i<X-1; ++i){
        unsigned long long times = 1;
        for(int k=0; k<i; ++k){
            times *= amari;
        }
        total += times % M;
    }

    cout << total % M << endl;

    return 0;
}
