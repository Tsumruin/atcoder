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

void printVector(const vector<int>& vec) {
    for (int value : vec) {
        cout << value << " ";
    }
    cout << endl;
}

void print2ndVector(const vector<vector<bool>> v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){

    double R, X, Y; cin >> R >> X >> Y;
    
    double Z = sqrt(X*X + Y*Y);

    long long res;

    if(R <= Z){
        res = ceil(Z / R);
    }
    else{ 
        res = 2;
    }

    cout << res << endl;

    return 0;
}