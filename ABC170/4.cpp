#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

bool IsPrime(int num){
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false;

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2){
        if (num % i == 0){
            return false;
        }
    }

    return true;
}

int main(){

    unsigned long long N; cin >> N;
    bool flag;
    long long count = 0;
    unsigned long long i;

    vector<int> A(N);
    vector<int> tmp(N);

    for(i=0; i<N; i++){
        cin >> tmp.at(i);
    }

    sort(tmp.begin(), tmp.end());

    for(i=0; i<N; i++){
        flag = true;
        A.at(i) = tmp.at(i);
        if(0 == i){
            if(IsPrime(A.at(i))){
                count++;
                continue;
            }
        }
        else{
            if(A.at(i) == A.at(i-1)) break;
            if(IsPrime(A.at(i))){
                count++;
                continue;
            }
            for(int k=0; k<i; k++){
                if(A.at(i) % A.at(k) == 0){
                    flag = false;
                    break;
                }
            }
            if(flag){
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}