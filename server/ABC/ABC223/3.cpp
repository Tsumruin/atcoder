/*
contest URL: 
https://atcoder.jp/contests/abc223/tasks/abc223_c
*/


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
    int N; cin >> N;

    vector<int> A(N);
    vector<int> B(N);
    for(int i=0; i<N; ++i){
        cin >> A.at(i) >> B.at(i);
    }

    // ぶつかる時間
    double time = 0.0;
    for(int i=0; i<N; ++i){
        time += double(A.at(i)*1.0 / B.at(i));
    }
    time /= 2;

    double res = time;
    int final_id;
    for(int i=0; i<N; ++i){
        double i_time = double(A.at(i)*1.0 / B.at(i));
        // cout << "i_time:" << i_time << endl;
        res -= i_time;
        // cout << "res:" << res << endl;
        if(res <= 0){
            res += i_time;
            final_id = i;
            break;
        }
    }


    double rest_length = 0;
    for(int i=0; i<final_id; ++i){
        rest_length += A.at(i);
    }
    rest_length += double(res*1.0 * B.at(final_id));

    // cout << B.at(final_id) << endl;

    cout << rest_length << endl;

    return 0;
}