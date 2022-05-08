#include <iostream>
using namespace std;

int main(){

    int N, A, B; cin >> N >> A >> B;

    int row = N * A;
    bool flag = true;
    bool tmp;

    for(int i=0; i<N; ++i){
        for(int k=0; k<A; ++k){
            tmp = flag;
            for(int l=0; l<N; ++l){
                if(tmp){
                    for(int j=0; j<B; ++j){
                        cout << ".";
                    }
                }
                else{
                    for(int j=0; j<B; ++j){
                        cout << "#";
                    }
                }

                if(tmp){
                    tmp = false;
                }else{
                    tmp = true;
                }
            }
            cout << endl;
        }
        if(0 == i%2){
            flag = false;
        }
        else{
            flag = true;
        }
    }

    return 0;
}