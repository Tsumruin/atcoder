// #include <iostream>
// using namespace std;
// #define EPS 0.001

// int main(void){
//     unsigned long long A; cin >> A;
//     double B; cin >> B;
//     long long Bh = B * 100 + EPS;
//     unsigned long long C = (A * Bh) / 100;
//     cout << C << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A;
    string B;
    cin >> A >> B;
    long long B100 = (B[0]-'0')*100 + (B[2]-'0')*10 + (B[3]-'0');
    cout << A * B100 / 100 << endl;
}