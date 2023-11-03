#include <iostream>
#include <vector>
#include <iomanip> 
#include <limits>
#include <climits>
#include <cmath>
#include <algorithm>
#include <string>
#include <unordered_set>
using namespace std;

int main(){

    int N, K; cin >> N >> K;

    vector<int> A(K);
    for(int i = 0; i < K; i++){
        cin >> A.at(i);
        A.at(i)--; //index補正
    }

    vector<vector<long long>> map(N, vector<long long>(2));
    for(int i = 0; i < N; i++){
        cin >> map.at(i).at(0);
        cin >> map.at(i).at(1);
    }

    unsigned long long global_max;
    long long targetX;
    long long targetY;
    long long tmp;
    for(int i=0; i < N; i++){
        long long local_min = LLONG_MAX;

        for(int k=0; k < K; k++){
            targetX = map.at(A.at(k)).at(0);
            targetY = map.at(A.at(k)).at(1);

            tmp = abs(targetX - map.at(i).at(0))*abs(targetX - map.at(i).at(0)) + abs(targetY - map.at(i).at(1))*abs(targetY - map.at(i).at(1));

            // cout << A.at(k)+1 << " " << i+1 << ": " << tmp << endl;

            if(tmp < local_min){
                local_min = tmp;
            }

        }
        if(i==0) global_max = local_min;
        else{
            if(local_min > global_max){
                global_max = local_min;
            }
        }
    }

    cout << fixed << setprecision(10) <<  sqrt(global_max) << endl;


    return 0;
}