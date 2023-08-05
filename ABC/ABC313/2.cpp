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

    int N, M; cin >> N >> M;
    vector<int> ppl(N);
    for(int i=0; i<N; ++i){
        ppl.at(i) = 1;
    }  

    for(int i=0; i<M; ++i){
        int A, B; cin >> A >> B;
        ppl.at(B-1) = 0;
    }

    int judge = 0;
    for(int i=0; i<N; ++i){
        judge += ppl.at(i);
    } 

    if(1 == judge){
        for(int i=0; i<N; ++i){
            if(1 == ppl.at(i)){
                cout << i+1 << endl;
                return 0;
            }
        } 
    }
    else{
        cout << -1 << endl;
    }



    return 0;
}
