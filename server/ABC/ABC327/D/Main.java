import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            int M = Integer.parseInt(sc.next());

            int[] A = new int[M];
            int[] B = new int[M];

            int[][] check = new int[N+10][N+10];

            UnionFind uf = new UnionFind(N+10);

            for(int i=0; i<M; ++i){
                A[i] = Integer.parseInt(sc.next());
            }

            for(int i=0; i<M; ++i){
                B[i] = Integer.parseInt(sc.next());
            }

            String res = "Yes";
            for(int i=0; i<M; ++i){

                // System.out.println(i);

                if(check[A[i]][B[i]] > 0) continue;

                if(uf.same(A[i], B[i])){
                    res = "No";
                    break;
                }
                uf.unite(A[i], B[i]);

                check[A[i]][B[i]] = 1;
                check[B[i]][A[i]] = 1;

            }

            System.out.println(res);
        }
    }
}

class UnionFind {
    int[] parent;
    int[] rank;

    public UnionFind(int n) {
        // 初期化コンストラクタ
        this.parent = new int[n+10];
        this.rank = new int[n+10];

        // 最初はすべてが根
        for (int i = 1; i <= n; i++) {
            parent[i] = i;
            rank[i] = 0;
        }
    }

    /**
     * 要素の根を返す。
     * 経路圧縮付き。（1→3→2となっていて2をfindした際、1→3,2と木の深さを浅くする。）
     *
     * @param x
     * @return 要素xの根
     */
    public int find(int x) {
        if (x == parent[x]) {
            return x;
        } else {
            // 経路圧縮時はrank変更しない
            parent[x] = find(parent[x]);
            return parent[x];
        }
    }

    /**
     * ２つの要素が同じ集合に属するかどうかを返す。
     *
     * @param x
     * @param y
     * @return 同じ集合であればtrue
     */
    public boolean same(int x, int y) {
        return find(x) == find(y);
    }

    /**
     * 要素xが属する集合と要素yが属する集合を連結する。
     * 木の高さ（ランク）を気にして、低い方に高い方をつなげる。（高い方の根を全体の根とする。）
     *
     * @param x
     * @param y
     */
    public void unite(int x, int y) {
        int xRoot = find(x);
        int yRoot = find(y);

        if (xRoot == yRoot) {
            // 属する集合が同じな場合、何もしない
            return;
        }

        // rankを比較して共通の根を決定する。
        // ※find時の経路圧縮はrank考慮しない
        if (rank[xRoot] > rank[yRoot]) {
            // xRootのrankのほうが大きければ、共通の根をxRootにする
            parent[yRoot] = xRoot;
        } else if (rank[xRoot] < rank[yRoot]) {
            // yRootのrankのほうが大きければ、共通の根をyRootにする
            parent[xRoot] = yRoot;
        } else {
            // rankが同じであれば、どちらかを根として、rankを一つ上げる。
            parent[xRoot] = yRoot;
            rank[xRoot]++;
        }
    }
}