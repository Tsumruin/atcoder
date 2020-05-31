#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void){
    int N; cin >> N;
    unsigned long long tmp;
    vector<unsigned long long> num;
    unsigned long long prod = 1;

    for(int i=0; i<N; i++){
        cin >> tmp;
        prod *= tmp;
    }
    if(prod > 1000000000000000000){
        cout << -1 << endl;
        exit(0);
    }

    cout << prod << endl;

    return 0;
}
