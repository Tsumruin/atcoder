#include <iostream>
using namespace std;

int main(){
    long long A; cin >> A;
    long long V; cin >> V;
    long long B; cin >> B;
    long long W; cin >> W;
    long long T; cin >> T;

    if(V <= W){
        cout << "NO" << endl;
        exit(0);
    }
    else if(A < B){
        if(A + V*T >= B + W*T){
            cout << "YES" << endl;
            exit(0);
        }
    }
    else{
        if(A - V*T <= B - W*T){
            cout << "YES" << endl;
            exit(0);
        }
    }

    cout << "NO" << endl;

    return 0;
}