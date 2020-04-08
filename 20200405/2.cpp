#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


int main(void){
    int N; cin >> N;
    int tmp1;
    string tmp2;
    vector <int> b;
    vector <int> r;
    for(int i=0; i<N; i++){
        cin >> tmp1 >> tmp2;
        if("B" == tmp2){
            b.push_back(tmp1);
        }
        else{
            r.push_back(tmp1);
        }
    }

    sort(b.begin(), b.end());
    sort(r.begin(), r.end());

    for(int i=0; i<r.size(); i++){
        cout << r[i] << endl;
    }
    for(int i=0; i<b.size(); i++){
        cout << b[i] << endl;
    }
 
    return 0;
}