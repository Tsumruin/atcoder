#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <unordered_set>
using namespace std;

int main(){

    int M; cin >> M;

    vector<int> D(M);
    vector<int> D_sum(M+1);
    D_sum[0] = 0;
    for(int i=0; i<M; ++i){
        cin >> D.at(i);
        D_sum.at(i+1) = D_sum.at(i) + D.at(i);
    }

    int middle =(D_sum[M] + 1) / 2;
        
    int month, day;
    for(int i=0; i<M; ++i){
        if(D_sum[i] < middle && middle <= D_sum[i+1]){
            month = i+1;
            day = middle - D_sum[i];
            break;
        }
    }

    cout << month  << " " << day << endl;

    return 0;
}
