#include <iostream>
#include <vector>
#include <iomanip> 
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

    sort(N.begin(), N.end());

    long long maximum = 0;

    do {
        for(int i=0; i<N.size(); ++i){
            long long l = 0, r = 0;
            for(int k=0; k<i; ++k){
                l = 10 * l + N[k] - '0';
            }
            for(int k=i; k<N.size(); ++k){
                r = 10 * r + N[k] - '0';
            }
            maximum = max(maximum, l * r);
        }
    }while(next_permutation(N.begin(),N.end()));

    cout << maximum << endl;

    return 0;
}