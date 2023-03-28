#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

int move(int A, int B, int d){
    if(d < A) return A;
    else if(d > B) return B;
    else return d;
}

int main(){

    int N, A, B; cin >> N >> A >> B;

    int position = 0;
    for(int i=0; i<N; ++i){
        string dir; cin >> dir;
        int d; cin >> d;
        if("East" == dir) position += move(A, B, d);
        else position -= move(A,B, d);
    }

    if(position > 0) cout << "East " << position << endl;
    else if(position < 0) cout << "West " << abs(position) << endl;
    else cout << 0 << endl;

    return 0;
}