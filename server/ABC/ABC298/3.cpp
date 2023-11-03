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

    vector<vector<int>> two(N, vector<int>());
    vector<vector<int>> three(N, vector<int>());

    for(int i=0; i<Q; ++i){
        int check; cin >> check;
        int box, number;
        if(1 == check){
            cin >> number >> box;
            int box_id = id(box);
            two[box_id][two_length[box_id]] = number;
            two_length[box_id]++;

            three[number].insert(box);
        }
        
        if(2 == check){
            cin >> box;
            int box_id;
            box_id = id(box);

            sort(two[box_id].begin(), two[box_id].end());

            for(int i=0; i<two.size(); ++i){
                cout << two[box_id].at(i) << " ";
            }
            cout << endl;
        }
        if(3 == check){
            cin >> number;
        }
    }


    return 0;
}