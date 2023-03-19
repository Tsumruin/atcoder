#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

int main(){

    int N, M; cin >> N >> M;
    vector<long long> A(N), B(M), A_num(N), B_num(M);

    for(int i=0; i<N; ++i) cin >> A[i];
    for(int i=0; i<M; ++i) cin >> B[i];

    int A_iter = 0;
    int B_iter = 0;
    for(long long i=0; i<N+M; ++i){
        if(A_iter < N && B_iter < M){
            if(A[A_iter] < B[B_iter]){
                A_num[A_iter] = i+1;
                A_iter++;
            }
            else{
                B_num[B_iter] = i+1;
                B_iter++;
            }
        }
        else if(A_iter >= N){
            B_num[B_iter] = i+1;
            B_iter++;
        }
        else{
            A_num[A_iter] = i+1;
            A_iter++;    
        }
        
    }

    for(int i=0; i<N; ++i){
        cout << A_num[i];
        if(i<N-1) cout << " ";
    }
    cout << "\n";
    for(int i=0; i<M; ++i){
        cout << B_num[i];
        if(i<M-1) cout << " ";
    }


    return 0;
}