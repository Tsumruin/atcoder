#include <iostream>
using namespace std;

int main(){

    int R,C; cin >> R >> C;

    int tmp;
    int out;
    for(int i=0; i<2; ++i){
        for(int k=0; k<2; ++k){
            cin >> tmp;
            if(R-1 == i && C-1 == k){
                out = tmp;
            }
        }
    }

    cout << out << endl;

    return 0;
}