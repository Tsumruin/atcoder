#include <iostream>
#include <string>
using namespace std;

int main(){

    string S; cin >> S;

    for(int i=0; i<S.length(); i++){
        char str = S.at(i);
        if(str >= 'A' && str <= 'Z'){
            cout << i+1 << endl;
            return 0;
        }
    }


    return 0;
}