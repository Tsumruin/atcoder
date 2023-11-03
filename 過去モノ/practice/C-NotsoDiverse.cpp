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


void printVector(const vector<int>& vec) {
    for (int value : vec) {
        cout << value << " ";
    }
    cout << endl;
}

void print2ndVector(const vector<vector<bool>> v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int num_to_id(int num){
    return num - 1;
}

int main(){

    int N, K; cin >> N >> K;

    vector<int> numCount(200010);
    for(int i=0; i<200010; ++i){
        numCount.at(i) = 0;
    }
    for(int i=0; i<N; ++i){
        int num; cin >> num;
        int num_id = num_to_id(num);
        numCount.at(num_id)++;
    }

    sort(numCount.begin(), numCount.end());

    int count = 0;
    for(int i = numCount.size() - 1 - K; i >= 0; --i){
        // cout << "i:" << i << "target:" << numCount.at(i) << endl;
        if(numCount.at(i) < 1) break;
        count += numCount.at(i);

    }

    cout << count << endl;

    return 0;
}
