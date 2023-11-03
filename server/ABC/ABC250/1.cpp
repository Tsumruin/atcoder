#include <iostream>
using namespace std;

int main(){

    int H, W; cin >> H >> W;
    int R, C; cin >> R >> C;

    int count = 4;

    if(R-1 == 0){
        count--;
    }
    if(R+1 > H){
        count--; 
    }
    if(C-1 == 0){
        count--; 
    }
    if(C+1 > W){
        count--;
    }

    cout << count << endl;

    return 0;
}