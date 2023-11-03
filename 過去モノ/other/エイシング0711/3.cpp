#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int func(int x, int y, int n){
    double sq = sqrt( (x+y)*(x+y) - 4 * (x*x + y*y + x*y - n));
    if(ceil(sq) != floor(sq) || sq <= 0){
        return -1;
    }
    else{
        return (-(x + y) + int(sq)) / 2;
    }
}

int judge(int x, int y, int z){
    if(x == y && y == z){
        return 1;
    }
    else if(x != y && y != z && z != x){
        return 6;
    }
    else{
        return 3;
    }
}


int main(){

    int N; cin >> N;
    int x, y, z;
    int tmp;
    int count;

    for(int i=1; i<=5; i++){
        if(i<=N){
            cout << 0 << endl;
        }
    }

    for(int i=6; i<=N; i++){
        count = 0;
        for(x=1; x<=100; x++){
            for(y=x; y<=100; y++){
                tmp =  func(x, y, i);
                if(-1 != tmp){
                    z = tmp;
                    if(z <= 0) continue;
                    if(z < y) break;
                    // cout << i << " " << x << " "  << y<< " "  << z << endl;
                    count += judge(x, y, z);
                    break;
                }
            }
        }
        cout <<  count << endl;
    }

    return 0;
}
