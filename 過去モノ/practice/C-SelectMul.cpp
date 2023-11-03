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

unsigned getDigit(unsigned num){
	return log10(num)+1;
}

void printVector(const vector<int>& vec) {
    for (int value : vec) {
        cout << value << " ";
    }
    cout << endl;
}

int main(){
    string N; cin >> N;

    long long num = stoll(N);
    int digit = getDigit(num);

    long long maximum = 0;

    sort(N.begin(), N.end(), greater<int>());

    for (int bit = 0; bit < (1 << digit); ++bit) {
        // bit の表す集合を求める
        long long l = 0, r = 0;

        for (int i = 0; i < digit; ++i){
            if (bit & (1 << i)){
                l = 10 * l + N.at(i) - '0';
            }
            else{
                r = 10 * r + N.at(i) - '0';
            }
        }

        maximum = max(maximum, l * r);

    }

    cout << maximum << endl;

    return 0;
}