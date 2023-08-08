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

struct UnionFind {
    vector<int> par;

    UnionFind(int N) : par(N){
        for(int i = 0; i < N; i++) par[i] = i;
    }

    int root(int x){
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    /*
    * Unite two trees
    * @param x One tree
    * @param y The other tree
    * @return create a new tree whose root is y
    */
    void unite(int x, int y){
        int rx = root(x);
        int ry = root(y);
        if (rx == ry) return;
        par[rx] = ry;
    }

    bool same(int x, int y){
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main(){

    int N, M; cin >> N >> M;

    UnionFind tree(N);
    for(int i=0; i<M; ++i){
        int A, B; cin >> A >> B;
        tree.unite(A - 1, B - 1);
    }

    set<int> s;
    for(int i=0; i<N; ++i){
        s.insert(tree.root(i));
    }
    
    cout << s.size() - 1 << endl;

    return 0;
}