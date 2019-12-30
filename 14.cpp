#include <iostream>
using namespace std;
#define SIZE 3

int main(void){

    int *score = new int(SIZE);
    int mx, mn;

    for(int i=0; i<SIZE; i++){
        cin >> score[i];
    }
    mx = max(score[0], max(score[1], score[2]));
    mn = min(score[0], min(score[1], score[2]));

    cout << mx - mn << endl;

    return 0;
}