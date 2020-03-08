#include <iostream>
#include <climits>
using namespace std;

int main(void){

    int numA, numB, numM;
    int minA = INT_MAX, minB = INT_MAX;
    int price;
    cin >> numA >> numB >> numM;

    int *A = new int[numA];
    int *B = new int[numB];
    int *M = new int[3];

    for(int i=0; i<numA; i++){
        cin >> A[i];
        if(A[i] < minA){
            minA = A[i];
        }
    }
    
    for(int i=0; i<numB; i++){
        cin >> B[i];
        if(B[i] < minB){
            minB = B[i];
        }
    }

    price = minA + minB;

    for(int i=0; i<numM; i++){
        cin >> M[0] >> M[1] >> M[2];
        price = min(price, A[M[0]-1] + B[M[1]-1] - M[2]);
    }

    cout << price << endl;

    delete[] A;
    delete[] B;
    delete[] M;

    return 0;
}