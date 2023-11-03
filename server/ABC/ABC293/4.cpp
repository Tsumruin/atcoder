#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

int H, W;
vector<vector<int>> A(15, vector<int>(15));

int total = 0;

int key(int num){
    return num - 1;
}

unsigned nChoosek( unsigned n, unsigned k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    int result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}

void check(vector<int> arr, int i, int j){
    int find_key = A.at(key(i)).at(key(j));
    if(count(arr.begin(), arr.end(), find_key)){
        return; 
    }
    else{
        arr.push_back(find_key);
    }

    if(i < H){
        check(arr, i+1, j);
    }
    if(j < W){
        check(arr, i, j+1);
    }

    if(i == H && j == W){
        total++;
    }
}


int main(void){

    cin >> H >> W;
    for(int i = 0; i < H; i++){
        for(int k=0; k < W; k++){
            cin >> A.at(i).at(k);
        }
    }

    // unsigned t = nChoosek(H, W);

    vector<int> arr = {};
    check(arr, 1, 1);

    cout << total << endl;



    return 0;
}