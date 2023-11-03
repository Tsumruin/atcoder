#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

int main(){

    long long N, Q; cin >> N >> Q;
    vector<long long> A(Q);
    vector<long long> res(Q);
    long long iter = 0;

    set<long long> unout;
    long long unout_iter = 0;

    long long ones = 0;

    for(int i=0; i<Q; ++i){
        long long num; cin >> num;
        if(1 == num){
            ones++;
            unout.insert(ones);
            unout_iter++;
        }
        if(2 == num){
            int x; cin >> x;
            unout.erase(x);
            unout_iter--;
        }
        if(3 == num){
            auto itr = unout.begin();
            res[iter] = *itr;
            iter++;
        }
    }


    for(int i=0; i<iter; ++i){
        cout << res[i] << endl;;
    }

    return 0;
}