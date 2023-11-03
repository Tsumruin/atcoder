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
    string S; cin >> S;

    int count = 0;
    for(int split=1; split<=N-1; ++split){
        int count_tmp = 0;

        string first = S.substr(0, split);
        string second = S.substr(split);

        set<char> key_str(first.begin(), first.end());
        set<char> search_set(second.begin(), second.end()); 

        int key_str_length = key_str.size();
        for(auto x : key_str){
            if(search_set.count(x)) count_tmp++;
        }

        count = max(count, count_tmp);
    }

    cout << count << endl;

    return 0;
}