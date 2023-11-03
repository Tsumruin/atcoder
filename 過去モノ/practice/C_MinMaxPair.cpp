#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

int idToNum(int id){
    return id + 1;
}

int main(){

    int N; cin >> N;

    vector<int> A(N);
    vector<int> true_sum(N, 0);
    for(int i=0; i<N; i++){
        cin >> A.at(i);
        if(idToNum(i) == A.at(i)){
            if(0 == i) true_sum.at(0) = 1;
            else true_sum.at(i) = true_sum.at(i-1) + 1;
        }
        else{
            if(0 == i) true_sum.at(0) = 0;
            else true_sum.at(i) = true_sum.at(i-1);
        }
    }

    long long count = 0;
    for(int i=0; i<N; ++i){
        if(idToNum(i) == A.at(i)){
            count += (long long) true_sum.at(N-1) - true_sum.at(i);
        }
        else{
            int check_id = A.at(i) - 1;
            if(check_id > N-1) continue;
            if((idToNum(i) == A.at(check_id)) and (i < A.at(i))){
                count++;
            }
        }
    }

    cout << count << endl;

    // cout << "count:" << count << endl;

    // int check_count = 0;
    // for(int i=0; i<N-1; ++i){
    //     for(int j=i+1; j<N; ++j){
    //         if(min(A.at(i), A.at(j)) == idToNum(i) and max(A.at(i), A.at(j)) == idToNum(j)) check_count++;
    //     }
    // }

    // cout << "check_count:" << check_count << endl;

    return 0;
}