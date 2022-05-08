#include <iostream>
#include <vector>
using namespace std;

int main(){

    int N, Q; cin >> N >> Q;

    vector<int> id(N+1);
    vector<int> list(N);
    for(int i=0; i<N; i++){
        id.at(i+1) = i;
        list.at(i) = i+1;
    }

    int n;
    int tmp;
    int old, shin;
    for(int i=0; i<Q; i++){
        cin >> n;
        if(id.at(n) < N-1){
            old = id.at(n);
            id.at(n)++;
            shin = id.at(n);
            id.at(list.at(shin))--;
            tmp = list.at(shin);
            list.at(shin) = list.at(old);
            list.at(old) = tmp; 
        }
        else{
            old = id.at(n);
            id.at(n)--;
            shin = id.at(n);
            id.at(list.at(shin))++;
            tmp = list.at(shin);
            list.at(shin) = list.at(old);
            list.at(old) = tmp; 
        }
    }

    for(int i=0; i<N; i++){
        cout << list.at(i) << " ";
    }

    return 0;
}