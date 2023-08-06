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

int main(){

    int N; cin >> N;
    string S; cin >> S;

    if(0 != N % 2){
        cout << -1 << endl;
        return 0;
    }

    int count = 0;
    for(int i=0; i<N/2; ++i){
        int first_id = i;
        int second_id = i + N/2;

        if(S[first_id] != S[second_id]) count++;
    }

    cout << count << endl;

    return 0;
}