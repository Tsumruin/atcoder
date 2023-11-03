#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <unordered_set>
using namespace std;

const int dir_x[] = {0, 1, 0, -1};
const int dir_y[] = {1, 0, -1, 0};

int R, C;

int point_to_id(int num){
    return num - 1;
}

bool is_field(int id_y, int id_x){
    if(0 <= id_y && id_y < R && 0 <= id_x && id_x < C){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    cin >> R >> C;
    int sy, sx, gy, gx; cin >> sy >> sx >> gy >> gx;

    vector<vector<char>> data(R, vector<char>(C));
    for(int r=0; r<R; ++r){
        for(int c=0; c<C; ++c){
            cin >> data[r][c];
        }
    }

    map<pair<int, int>, int> dist{};
    queue<pair<int, int>> q;
    q.push(make_pair(point_to_id(sy), point_to_id(sx)));
    dist[make_pair(point_to_id(sy), point_to_id(sx))] = 0;

    while(!q.empty()){
        pair<int, int> visited = q.front();
        q.pop();

        for(int i=0; i<4; ++i){
            int search_y = visited.first + dir_x[i];
            int search_x = visited.second + dir_y[i];

            if(!is_field(search_y, search_x)) continue;

            if('.' == data[search_y][search_x]){
                // cout << search_y << "," << search_x << endl;
                pair<int, int> search = make_pair(search_y, search_x);
                if(dist.count(search)) continue;

                dist[search] = dist[visited] + 1;
                q.push(search);
            }
        }

    }

    for(auto itr=dist.begin(); itr!=dist.end(); itr++) {
        cout << "(" << itr->first.first << ", " << itr->first.second << ")";     
        cout << ", val = " << itr->second << endl;
    }

    cout << dist[make_pair(point_to_id(gy), point_to_id(gx))] << endl;


    return 0;
}
