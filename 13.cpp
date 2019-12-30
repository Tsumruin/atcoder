#include <iostream>
using namespace std;

int main(void){
    int N, ave;
    int sum = 0;
    int *score = new int(N);
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> score[i];
        sum += score[i];
    }
    ave = sum / N;
    for(int i=0; i<N; i++){
        cout << abs(ave - score[i]) << endl;
    }
    return 0;
}