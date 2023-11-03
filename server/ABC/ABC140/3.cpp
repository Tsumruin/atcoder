#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N; cin >> N;
    int sumA = 0;

    vector<int> B(N-1);
    for(int i=0; i<N-1; i++){
        cin >> B.at(i);
    }
    
    sumA += B.at(0);

    // B_iの値とB_{i+1}を比較してやる
    for(int i=0; i<=N-3; i++){
        if(B.at(i) <= B.at(i+1)){
            sumA += B.at(i);
        }
        else{
            sumA += B.at(i+1);
        }    
    }

    sumA += B.at(N-2);

    cout << sumA << endl;

    return 0;
}