#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

//2次元ベクトルを表示
void printVec(const vector<vector<int>> v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){

    int N, M; cin >> N >> M;

    vector<pair<long long, long long>> data(N);
    for(int i=0; i<N; ++i){
        long long A, B;
        cin >> A >> B;
        data.at(i) = {A, B};
    }

    sort(data.begin(), data.end());
    // vector<vector<long long>> data(N, vector<long long>(2));
    // for(int i=0; i<N; ++i){
    //     cin >> data[i][0] >> data[i][1];
    // }

    // sort(data.begin(), data.end(),[](const vector<long long> &alpha,const vector<long long> &beta){return alpha[1] < beta[1];});
    // sort(data.begin(), data.end(),[](const vector<long long> &alpha,const vector<long long> &beta){return alpha[0] < beta[0];});

    long long count = 0;
    long long iter = 0;
    long long total = 0;
    while(count < M){
        long long A = data[iter].first;
        long long B = data[iter].second;

        if(count + B >= M){
            total += A * (M - count);
            break;
        }
        else{
            count += B;
            total += A * B;
        }


        iter++;
    }

    cout << total << endl;

    return 0;
}