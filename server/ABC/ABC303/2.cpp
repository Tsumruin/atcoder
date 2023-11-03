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
    vector<vector<int>> A(M, vector<int>(N));
    for(int i=0; i<M; i++) {
        for(int k=0; k<N; k++) {
            cin >> A[i][k];
        }
    }

    vector<vector<int>> tonari(N, vector<int>(N));
    for(int i=0; i<N; i++) {
        for(int k=0; k<N; k++) {
            tonari[i][k] = 0;
            if(i == k) tonari[i][k] = 1;
        }
    }

    for(int i=0; i<M; i++) {
        for(int k=0; k<N-1; k++) {
            int left = A[i][k];
            int right = A[i][k+1];
            
            int left_id = left - 1;
            int right_id = right -1;

            tonari[left_id][right_id] = 1;
            tonari[right_id][left_id] = 1;
        }
    }

    int res = 0;
    for(int i=0; i<N; i++) {
        for(int k=0; k<N; k++) {
            if(tonari[i][k] == 0){
                res++;
            }
        }    
    }

    res /= 2;

    cout << res << endl;



    return 0;
}
