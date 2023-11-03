#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <unordered_set>
using namespace std;



int main(){

    long long N; cin >> N;
    vector<long long> A(N);

    long long sum = 0;
    for(int i=0; i<N; ++i){
        cin >> A.at(i);
        sum += A.at(i);
    }
    long long target = round((double)sum / N);

    cout << "target: " << target << endl;

    long long count = 0;
    for(int i=0; i<N; ++i){
        if(abs(target - A.at(i)) > 1){
            count += abs(target - A.at(i));
        }
        if(1 == target - A.at(0))
    }

    cout << (count / 2) << endl;

    return 0;
}
