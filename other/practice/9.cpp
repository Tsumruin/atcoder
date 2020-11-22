#include <iostream>
using namespace std;

int main(void){
    int x, a, b, num;
    cin >> x >> a >> b;
    
    cout << ++x << endl;

    num =  x * (a + b);
    cout << num << endl;

    num *= num;
    cout << num << endl;

    cout << --num << endl;

    return 0;
}