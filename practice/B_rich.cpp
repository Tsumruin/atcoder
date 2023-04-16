#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

int main(){

    int N; cin >> N;

    int first; cin >> first;
    int second; cin >> second;

    if(first < second){
        int tmp = second;
        second = first;
        first = tmp;
    }

    for(int i=2; i<N; ++i){
        int number; cin >> number;

        if(number > first){
            second = first;
            first = number;
        }
        else if(number == first) continue;
        else if(number > second){
            second = number;
        }
    }

    cout << second << endl;

    return 0;
}