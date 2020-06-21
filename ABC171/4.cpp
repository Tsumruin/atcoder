#include <iostream>
#include <vector>
using namespace std;

int main(){

    int N; cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin >> A.at(i);
    }
    int Q; cin >> Q;

    vector<int> B(Q);
    vector<int> C(Q);

    int sum;

    for(int i=0; i<Q; i++){
        cin >> B.at(i) >> C.at(i);
    }

    for(int k=0; k<Q; k++){
        sum = 0;
        for(int i=0; i<N; i++){
            if(A.at(i) ==B.at(k)){
                A.at(i) = C.at(k);
            }
            sum += A.at(i);
        }
        cout << sum << endl;
    }


    return 0;
}