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

    int N, A, B; cin >> N >> A >> B;

    for(int i=0; i<N; ++i){
        int tmp; cin >> tmp;
        if(tmp == A + B){
            cout << i+1 << endl;
        }
    }    

    return 0;
}