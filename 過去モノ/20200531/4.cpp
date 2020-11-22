#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool is_prime(const unsigned n){
    switch(n) {
        case 0: 
        case 1: return false;
        case 2: return true;
    }

    if(n % 2 == 0) return false;

    for(unsigned i=3; i*i <= n; i+=2) {
        if(0 == n%i) return false;
    }

    return true;
}

int main(void){
    unsigned int N; cin >> N;
    unsigned int tmp;
    int count =0;
    bool flag = false;

    vector<unsigned int> list;

    for(int i=1; i<=N; i++){
        for(int k=2; k<=N; k++){
            if(is_prime(N)) break;
            flag = false;
            if(!is_prime(k)) continue;
            tmp = pow(k, i);
            if(0 == N % tmp){
                for(int j=0; j<list.size(); j++){
                    if(tmp == list[j]){
                        flag = true;
                        break;
                    }
                }
                if(flag){
                    continue;
                }
                else{
                    cout << tmp << endl;
                    list.push_back(tmp);
                    count++;
                    N /= tmp;
                    cout << "N=" << N << endl;
                }
            }
        }
    }

    cout << count << endl;
}