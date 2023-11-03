#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <unordered_set>
using namespace std;

int main(){

    string S; cin >> S;

    for(int i=0; i<S.size(); ++i){
        char c = S.at(i);
        if(c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o'){
            S.erase(S.begin()+i);
            i--;
        }
    }

    cout << S << endl;

    return 0;
}
