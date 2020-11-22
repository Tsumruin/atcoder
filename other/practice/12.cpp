#include <iostream>
using namespace std;

int main(void){

    string S;
    int result = 1;
    cin >> S;
    for(int i=1; i<S.size()-1; i+=2){
        if('+' == S.at(i)){
            result++;
        }
        else if('-' == S.at(i)){
            result--;
        }
        else{
            cout << "error" << endl;
            exit(0);
        }
    }
    cout << result << endl;

    return 0;
}