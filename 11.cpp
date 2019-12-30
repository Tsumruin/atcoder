#include <iostream>
using namespace std;

int main(void){
    int N, A, opnum;
    cin >> N >> A;
    char op;
    for(int i=0; i<N; i++){
        cin >> op;
        cin >> opnum;
        if('+' == op){
            A += opnum;
        }
        else if('-' == op){
            A -= opnum;
        }
        else if('*' == op){
            A *= opnum;
        }
        else if('/' == op && 0 != opnum){
            A /= opnum;
        }
        else{
            cout << "error" << endl;
            exit(0);
        }
        cout << i+1 << ":" << A << endl;
    }
    return 0;
}