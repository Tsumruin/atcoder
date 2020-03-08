#include <string>
#include <iostream>
using namespace std;

int main(void){
    string str;
    string comp = "hi";
    bool flag = true;

    cin >> str;

    if(str.size() % 2 == 1){
        cout << "No" << endl;
        exit(0);
    }

    for(int i=0; i<str.size(); i++){
        if(str.at(i) != comp.at(i % 2)){
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}