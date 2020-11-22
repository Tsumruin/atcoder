#include <iostream>
#include <climits>
using namespace std;

int main(void){

    int numA, numB, numM, price;
    int i, k, j;
    int min = INT_MAX;
    int Mmax, maxmax = 0;
    cin >> numA >> numB >> numM;

    int *A = new int[numA];
    int *B = new int[numB];
    int **M = new int*[numM];
    for(i=0; i<numM; i++){
        M[i] = new int[3];
    }

    for(i=0; i<numA; i++){
        cin >> A[i];
    }
    
    for(i=0; i<numB; i++){
        cin >> B[i];
    }
    
    for(i=0; i<numM; i++){
        for(k=0; k<3; k++){
            cin >> M[i][k];  
            if(M[i][k] > maxmax){
                maxmax = M[i][k];
            }      
        }
    }

    for(i=0; i<numA; i++){
        if(A[i] - maxmax >= min) continue;
        for(k=0; k<numB; k++){
            price = A[i] + B[k];
            if(price - maxmax >= min) continue;
            Mmax = 0;
            for(j=0; j<numM; j++){
                if(i+1 == M[j][0] && k+1 == M[j][1] && M[j][2] >= Mmax){
                    Mmax = M[j][2];
                }
            }
            if(price - Mmax <= min){
                min = price - Mmax;
            }
        }
    }

    cout << min << endl;

    delete[] A;
    delete[] B;
    for(i=0; i<numM; i++){
        delete[] M[i];
    }
    delete[] M;

    return 0;
}