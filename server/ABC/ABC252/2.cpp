#include <iostream>
#include <vector>
using namespace std;

int main(){

    int N, K; cin >> N >> K;

    vector<int> A(N);
    vector<int> B(K);
    vector<int> M;


    int max = 0;
    for(int i=0; i<N; ++i){
        cin >> A.at(i);
        if(max < A.at(i)){
            max = A.at(i);
        }
    }
    for(int i=0; i<N; ++i){
        if(max == A.at(i)){
            M.push_back(i+1);
        }
    }

    for(int k=0; k<K; ++k){
        cin >> B.at(k);
        for(int i=0; i<M.size(); ++i){
            if(M.at(i) == B.at(k)){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;

    return 0;
}