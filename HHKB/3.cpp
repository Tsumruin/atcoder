#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int N; cin >> N;
    vector<int> p(N), q(N);
    int now;

    for(int i=0; i<N; i++){
        cin >> p.at(i);
        q.at(i) = 0;
    }

    now = p.at(0);

    if(p.at(0) == 0){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
        now = 0;
    }
    q.at(now) = 1;

    for(int i=1; i<N; i++){
        if(p.at(i) == now){
            for(int k=0; k<N; k++){
                if(q.at(k) == 0){
                    cout << i << ":" << p.at(k) << endl;
                    q.at(k) = 1;
                    now = p.at(k);
                    break;
                }
            }
        }
        else{
            cout << i << ":" << now << endl;
        }
    }

    return 0;
}