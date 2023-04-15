#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

int id(int num){
    return num - 1; 
}

int main(){

    int N, Q; cin >> N >> Q;

    const int M = 200010;

    vector<vector<int>> two(N, vector<int>());
    vector<set<int>> three(M, set<int>());

    for(int i=0; i<Q; ++i){
        int check; cin >> check;
        int box, number;
        if(1 == check){
            cin >> number >> box;
            int box_id = id(box);
            two[box_id].push_back(number);

            int number_id = id(number);
            three[number_id].insert(box);
        }
        
        if(2 == check){
            cin >> box;
            int box_id;
            box_id = id(box);

            sort(two[box_id].begin(), two[box_id].end());

            for(int i=0; i<two[box_id].size(); ++i){
                cout << two[box_id].at(i) << " ";
            }
            cout << endl;
        }
        if(3 == check){
            cin >> number;
            int number_id;
            number_id = id(number);

            // sort(three[number_id].begin(), three[number_id].end());

            for(auto x : three[number_id]) {
                std::cout << x << " ";     // 要素を順に表示
            }
            cout << endl;
        }
    }


    return 0;
}