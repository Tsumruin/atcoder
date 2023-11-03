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

    unsigned long long N, K; cin >> N >> K;

    set<unsigned long long> s; 

    for(unsigned long long i=0; i<N; ++i){
        unsigned long long num; cin >> num;
        s.insert(num);
    }

    cout << s.size() << endl;

    return 0;
}
