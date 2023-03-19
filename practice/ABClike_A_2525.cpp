#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

vector<long long> divisor(long long n) {
    /*  divisor(n)
    入力：整数 n
    出力：nのすべての約数
    計算量：O(√n)
*/
    vector<long long> ret;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    sort(ret.begin(), ret.end()); // 昇順に並べる
    return ret;
}

bool check(long long num){
    long long tmp = 1;

    bool flag = false;
    while(1){
        if(num == 25 * tmp){
            flag = true;
            break;
        }
        else if(num / (25*tmp) <= 0){
            break;
        }
        else{
            tmp += 100 * tmp;
        }

    }
    return flag;
}

int main(){
    long long N; cin >> N;

    // long long count = 0;    
    // for(long long iter=1; iter<=N; ++iter){
    //     // cout << "iter:" << iter << endl;
    //     vector<long long> div = divisor(iter);
    //     long long div_length = div.size();
    //     for(int i=0; i<div_length; ++i){
    //         long long num = div.at(i);
    //         if(check(num)){
    //             count++;
    //             break;
    //         }
    //     }
    // }

    // cout << count << endl;

    cout << N / 25 << endl;

    return 0;
}