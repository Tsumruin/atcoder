#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
using namespace std;

int main(){

    int N, K; cin >> N >> K;
    int sum = 0;

    vector<int> p(N);
    for(int i=0; i<N; i++){
        cin >> p.at(i);
    }
    
    sort(p.begin(), p.end());

    for(int i=0; i<K; i++){
        sum += p.at(i);
    }

    cout << sum << endl;

    return 0;
}