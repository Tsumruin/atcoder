#include <iostream>
#include <algorithm>
using namespace std;

bool judge(string x){
    string y;
    y = x;
    reverse(x.begin(), x.end());
    if(x == y){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    string S, S_1, S_2;
    cin >> S;

    int div_1, div_2;
    div_1 = (S.size() - 1) / 2;
    div_2 = (S.size() + 1) / 2;

    S_1 = S.substr(0, div_1);
    S_2 = S.substr(div_2);
    

    if(judge(S) && judge(S_1) && judge(S_2)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}