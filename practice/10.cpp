#include <iostream>
using namespace std;

int main(void){
    int a, b;
    cin >> a >> b;

    cout << "A:";
    for(int i=0; i<a; i++){
        cout << "]";
    }
    cout << endl;
    cout << "B:";
    for(int i=0; i<b; i++){
        cout << "]";
    }
    cout << endl;

    return 0;
}