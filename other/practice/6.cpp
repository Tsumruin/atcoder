#include <iostream>
using namespace std;

int divide(int a, int b){
    if(0 == b){
        throw "error";
    }
    return a / b;
}

int main(void){
    int a, b;
    string op;
    cin >> a >> op >> b;
    if("+" == op){
        cout << a + b << endl;
    }
    else if("-" == op){
        cout << a - b << endl;
    }
    else if("*" == op){
        cout << a * b << endl;
    }
    else if("/" == op){
        try{
            cout << divide(a, b) << endl;
        }
        catch(const char* s){
            cout << s << endl;
        }
    }
    else{
        cout << "error" << endl;
    }
    return 0;
}