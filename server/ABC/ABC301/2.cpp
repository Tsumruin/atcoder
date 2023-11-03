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
    for(int i=0; i<N; ++i){
        cin >> A.at(i);
    }

    int i = 0;
    while(1){
        if(i >= A.size()-1) break;
        int dif = abs(A.at(i) - A.at(i+1));
        if(dif > 1){
            int num_i = A.at(i);

            if(A.at(i) > A.at(i+1)){
                for(int k=0; k<dif-1; ++k){
                    A.insert(A.begin() + 1 + i + k, num_i - k - 1);
                }
            }
            else{
                for(int k=0; k<dif-1; ++k){
                    A.insert(A.begin() + 1 + i + k, num_i + k + 1);
                }
            }
        }
        i+= dif;
    }

    for(int i=0; i<A.size(); ++i){
        cout << A.at(i) << " ";
    }


    return 0;
}