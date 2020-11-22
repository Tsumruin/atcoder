#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b){
    if(a < b) gcd(b, a);
    return a % b == 0 ? b : gcd(b, a % b);
}

int main(void){
    int N; cin >> N;
    int Q; cin >> Q;
    vector <int> A;
    vector <int> S;

    int i, k, tmp;
    int X;
    bool flag = false;

    for(i=0; i<N; i++){
        cin >> tmp;
        A.push_back(tmp);
    }
    for(i=0; i<Q; i++){
        cin >> tmp;
        S.push_back(tmp);
    }

    for(i=0; i<Q; i++){

        for(k=0; k<N; k++){
            S[i] = gcd(S[i], A[k]);
            if(1 == S[i]){
                flag = true;
                cout << k+1 << endl;
                break;
            }
        }
        if(!flag){
            cout << S[i] << endl;
        }
        flag = false;

    }

    return 0;
}