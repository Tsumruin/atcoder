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

    int N; cin >> N;

    int sum_T = 0;
    int sum_A = 0;
    char last;
    for(int i=0; i<N; ++i){
        char tmp; cin >> tmp;
        if('T' == tmp) sum_T++;
        if('A' == tmp) sum_A++;
        if(i == N-1) last = tmp;
    }
    
    if(sum_T > sum_A){
        cout << 'T' << endl;
    }
    else if(sum_A > sum_T){
        cout << 'A' << endl;
    }
    else{
        if(last == 'T') cout << 'A' << endl;
        else cout << 'T' << endl;
    }


    return 0;
}