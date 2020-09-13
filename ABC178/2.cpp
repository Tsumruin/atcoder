#include <iostream>
using namespace std;

int main(){

    long long a, b, c, d; cin >> a >> b >> c>> d;
    long long M;

    M = b*d;

    if(a*c > M){
        M = a*c;
    }
    if(a*d > M){
        M = a*d;
    }
    if(b*c > M){
        M = b*c;
    }

    cout << M << endl;

    return 0;
}
