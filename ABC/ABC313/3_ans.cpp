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

    sort(A.begin(), A.end());

    long long max_num = A.at(0);
    long long min_num = A.at(0);
    for(int i=0; i<N; ++i){
        max_num = max(max_num, A.at(i));
        min_num = min(min_num, A.at(i));
    }

    if(max_num - min_num > 1){
        for(int i=0; i<N; ++i){
            if(A.at(i) < target)
        }
    }

    long long count = 0;
    for(int i=0; i<N; ++i){
        if(abs(target - A.at(i)) > 1){
            count += abs(target - A.at(i));
        }
    }

    cout << (count / 2) << endl;

    return 0;
}
