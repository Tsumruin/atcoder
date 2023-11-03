#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main(){

    unsigned long long N; cin >> N;
    
    unsigned long long a;
    unsigned long long judge;
    unordered_set<unsigned long long> num;

    for(a=2; a*a <= N; a++){
        judge = a*a;
        while(judge <= N){
            num.insert(judge);
            judge *= a;
        }
    }

    cout << N - num.size() << endl;

    return 0;
}