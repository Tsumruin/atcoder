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

long long id(long long num){
    return num - 1;
}

//グラフのエッジを格納するデータ構造
struct Edge {
    int src, dest;
};

//グラフオブジェクトを表すクラス
class Graph{
public:
    //隣接リストを表すvectorのvector
    vector<vector<int>> adjList;

    //グラフコンストラクタ
    Graph(vector<Edge> const &edges, int n)
    {
        //タイプ`vector<int>`の`n`要素を保持するようにvectorのサイズを変更します
        adjList.resize(n);

        //有向グラフにエッジを追加します
        for (auto &edge: edges)
        {
            //最後に挿入
            adjList[edge.src].push_back(edge.dest);

            //無向グラフの次のコードのコメントを解除します
            // adjList[edge.dest].push_back(edge.src);
        }
    }
};

//グラフの隣接リスト表現を印刷する関数
void printGraph(Graph const &graph, int n)
{
    for (int i = 0; i < n; i++)
    {
        //現在の頂点番号を出力します
        cout << i << " ——> ";

        //頂点`i`の隣接するすべての頂点を出力します
        for (int v: graph.adjList[i]) {
            cout << v << " ";
        }
        cout << endl;
    }
}

int main(){

    long long N; cin >> N;
    vector<long long> C(N);

    vector<Edge> edges = {};
    for(long long i=0; i<N; ++i){
        cin >> C[i];
        for(long long k=0; k<C[i]; ++k){
            long long need_book; cin >> need_book;
            Edge tmp = {need_book, i+1};
            edges.push_back(tmp);
        }
    }

    Graph graph(edges, N);


    //グラフの隣接リスト表現を出力します
    printGraph(graph, N);


    return 0;
}
