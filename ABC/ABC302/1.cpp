#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

int main(){

    long long A, B; cin >> A >> B;

    long long result;
    if(0 == A%B){
        result = A/B;
    }
    else{
        result = A / B + 1;
    }
    cout << result << endl;

    return 0;
}