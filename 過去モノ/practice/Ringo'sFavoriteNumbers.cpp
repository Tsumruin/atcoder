#include <iostream>
#include <vector>
#include <iomanip> 
#include <functional>
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

int main(){

    int D, N; cin >> D >> N;


    if(0 == D) cout << N + (N/100) << endl;
    else if(1 == D) cout << 100 * (N + (N/100)) << endl;
    else if(2 == D) cout << 10000 * (N + (N/100)) << endl;

    return 0;
}
