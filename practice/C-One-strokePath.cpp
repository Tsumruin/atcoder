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

int N, M;

int num_to_id(int num){
    return num - 1;
}

int dfs(vector<vector<bool>> tree, vector<bool> visited, int now, int depth){
    if(visited[now]) return 0;
    if(N-1 == depth) return 1;

    visited[now] = true;
    int total = 0;

    for(int i=0; i<N; ++i){
        if(tree[now][i]){
            total += dfs(tree, visited, i, depth+1);
        }
    }

    visited[now] = false;

    return total;
}


int main(){

    cin >> N >> M;

    vector<vector<bool>> tree(N, vector<bool>(N));
    for(int i=0; i<N; ++i){
        for(int k=0; k<N; ++k){
            tree[i][k] = false;
        }
    }

    for(int _=0; _<M; ++_){
        int a, b; cin >> a >> b;
        tree[num_to_id(a)][num_to_id(b)] = true;
        tree[num_to_id(b)][num_to_id(a)] = true;
    }

    vector<bool> visited(N);
    for(int i=0; i<N; ++i) visited[i] = false;

    cout << dfs(tree, visited, 0, 0) << endl;

    return 0;
}
