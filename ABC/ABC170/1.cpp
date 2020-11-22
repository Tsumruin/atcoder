#include <iostream>
#include <vector>
using namespace std;

int main(){

    int result;
    int tmp;

    for(int i=0; i<5; i++){
        cin >> tmp;
        if(tmp == 0){
            result = i+1;
        }
    }

    cout << result << endl;

    return 0;
}