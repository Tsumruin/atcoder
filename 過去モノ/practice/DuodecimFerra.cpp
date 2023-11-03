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

long long nChooseK(long long n, long long k){
    long long result = 1; 
    for(int i=0; i<k; ++i){
        result *= n - i;
        result /= (i+1);
    }
    return result;
}

int main(){

    long long L; cin >> L;
    const long long length = 12;
    cout << nChooseK(L-1, length-1) << endl;

    return 0;
}
