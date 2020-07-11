#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// int func(int x, int y, int n){
//     double sq = sqrt( (x+y)*(x+y) - 4 * (x*x + y*y + x*y - n));
//     if(ceil(sq) != floor(sq) || sq <= 0){
//         return -1;
//     }
//     else{
//         return (-(x + y) + int(sq)) / 2;
//     }
// }

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
    vector<int> count(N+1);

    for(x=1; x<=100; x++){
        for(y=1; y<=100; y++){
            for(z=1; z<=100; z++){
                tmp = x*x + y*y + z*z + x*y + y*z + z*x;
                if(tmp <= N){
                    count.at(tmp)++;
                }
            }
        }
    }

    for(int i=0; i<N; i++){
        cout << count.at(i+1) << endl;
    }

    return 0;
}
