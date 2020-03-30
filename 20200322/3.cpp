#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;

int main(){

    int L;
    double tmp;
    cin >> L;

    tmp = (double)L / 3;

    cout << fixed << setprecision(12) << pow(tmp, 3) << endl;

    return 0;
}