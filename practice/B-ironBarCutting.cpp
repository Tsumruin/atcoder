#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

#define TO_STRING(VariableName) # VariableName

int main(){

    int N; cin >> N;

    long long dif = 0;

    vector<long long> A(N), B(N);
    long long total_num = 0;
    for(int i = 0; i < N; ++i){
        cin >> A.at(i);
        B.at(i) = A.at(i);
        total_num += A.at(i);
    }

    if(0 == N % 2){
        long long left_sum = 0;
        for(int i=0; i<N/2; ++i){
            left_sum += A.at(i);
        }
        dif = abs(total_num - left_sum*2);
        cout << dif << endl;
    }
    else{
        int center_id = int(N/2);
        B.at(center_id) = 1;

        long long left_sum_A = 0;
        for(int i=0; i<center_id; ++i){
            left_sum_A += B.at(i);
        }
        long long right_sum_A = 0;
        for(int i=center_id; i<N; ++i){
            right_sum_A += B.at(i);
        }
        long long dif_A = abs(left_sum_A - right_sum_A);

        long long left_sum_B = 0;
        for(int i=0; i<=center_id; ++i){
            left_sum_B += B.at(i);
        }
        long long right_sum_B = 0;
        for(int i=center_id+1; i<N; ++i){
            right_sum_B += B.at(i);
        }
        long long dif_B = abs(left_sum_B - right_sum_B);

        if(0 == min(dif_A, dif_B)){
            cout << abs(A.at(center_id) - B.at(center_id)) << endl;
        }
        else{
            B.at(center_id) += min(dif_A, dif_B);
            
            for(int i = 0; i < N; ++i){
                dif += abs(A.at(i) - B.at(i));
            }

            // for(int i = 0; i < N; ++i){
            //     cout << B.at(i) << " ";
            // }

            cout << dif << endl;
        }
    }

    return 0;
}