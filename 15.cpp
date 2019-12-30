#include <iostream>
using namespace std;

int main(void){

    int N;
    cin >> N;

    int result = 1;
    int *sum = new int[3];

    int **score = new int*[3];
    for(int i=0; i<3; i++){
        score[i] = new int[N];
    }

    for(int i=0; i<3; i++){
        sum[i] = 0;
        for(int k=0; k<N; k++){
            cin >> score[i][k];
            sum[i] += score[i][k];
        }
        result *= sum[i];
    }

    cout << result << endl;

    delete[] score;

    return 0;
}