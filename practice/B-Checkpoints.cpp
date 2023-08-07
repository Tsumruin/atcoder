#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <climits>
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

long dist(long x1, long x2, long y1, long y2){
    return abs(x1 - x2) + abs(y1 - y2);
}

int main(){

    int N, M; cin >> N >> M;

    vector<pair<long, long>> student;
    for(int i=0; i<N; ++i){
        long a, b; cin >> a >> b;
        student.push_back({a, b});
    }

    vector<pair<long, long>> checkpoint;
    for(int i=0; i<M; ++i){
        long c, d; cin >> c >> d;
        checkpoint.push_back({c, d});
    }

    vector<int> res(N);
    for(int iter_n=0; iter_n<N; ++iter_n){
        long minimum = LONG_MAX;
        int min_id = -1;
        for(int iter_m=0; iter_m<M; ++iter_m){
            long a = student[iter_n].first;
            long b = student[iter_n].second;
            long c = checkpoint[iter_m].first;
            long d = checkpoint[iter_m].second;

            if(minimum > dist(a, c, b, d)){
                minimum = dist(a, c, b, d);
                min_id = iter_m + 1;
            }
        }
        res[iter_n] = min_id;
    }

    for(int i=0; i<N; ++i){
        cout << res[i] << endl;
    }



    return 0;
}