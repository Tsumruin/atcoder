#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(void){

    string N; cin >> N;

    reverse(N.begin(), N.end());

    int num = N.at(0) - '0';

    switch(num){
        case 2:
        case 4:
        case 5:
        case 7:
        case 9:
            cout << "hon" << endl;
            break;
        case 0:
        case 1:
        case 6:
        case 8:
            cout << "pon" << endl;
            break;
        case 3:
            cout << "bon" << endl;
            break;
        default:
            break;
    }

    return 0;
}