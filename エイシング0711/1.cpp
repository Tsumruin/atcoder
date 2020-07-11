#include <iostream>
using namespace std;

int main(){

    int L, R, D; cin >> L >> R >> D;
    int count = 0;

    for(int i=L; i<=R; i++){
        if(0 == i % D){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
