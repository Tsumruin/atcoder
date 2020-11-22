#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int value = 0;

    if(N >= 500){
        value += 1000 * (N / 500);
        N %= 500;
    }
    if(N > 0){
        value += 5 * (N / 5);
    }

    cout << value << endl;

    return 0;
}