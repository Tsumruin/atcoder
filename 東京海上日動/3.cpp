#include <iostream>
#include <vector>
using namespace std;

int main(){
    unsigned long long N; cin >> N;
    unsigned long long K; cin >> K;
    vector<unsigned long long> A(N);
    long long start, last;

    for(int i=0; i<N; i++){
        cin >> A.at(i);
    }

    for(int k=0; k<K; k++){
        vector<unsigned long long> B(N);
        start = 0;
        last = N-1;
        for(int i=0; i<N; i++){
            if((long long)(i-A.at(i)) >= 0){
                start = (long long)i-A.at(i);
            }
            if((long long)(i+A.at(i)) <= N-1){
                last = (long long)i+A.at(i);
            }
            for(int j=start; j<=last; j++){
                B.at(j)++;
            }
        }
        A = B;
    }

    for(int i=0; i<N; i++){
        cout << A.at(i) << " ";
    }

    return 0;
}