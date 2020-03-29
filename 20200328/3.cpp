#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int K, N, tmp;
    cin >> K >> N;
    vector<int> A;
    int maxi = 0;
    int sum;

    for(int i=0; i<N; i++){
        cin >> tmp;
        A.push_back(tmp);
    }

    sort(A.begin(), A.end());

    for(int i=0; i<N-1; i++){
        tmp = abs(A[i] - A[i+1]);
        if(tmp > K/2){
            tmp -= 10;
        }
        if(tmp > maxi){
            maxi = tmp;
        }
    }

    if(maxi < 10){
        sum = maxi;
    }
    else{
        tmp = abs(A[0] - A[N-1]);
        if(tmp > K/2){
            tmp -= 10;
        }
        if(tmp > maxi){
            maxi = tmp;
        }
        sum = maxi;
    }

    cout << sum;

    return 0;
}