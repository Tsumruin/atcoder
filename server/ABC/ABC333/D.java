import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

class UnionFind {
    private Map<Integer, Integer> parent;
    private Map<Integer, Integer> size;

    public UnionFind() {
        parent = new HashMap<>();
        size = new HashMap<>();
    }

    public int find(int u) {
        if (!parent.containsKey(u)) {
            parent.put(u, u);
            size.put(u, 1);
            return u;
        }

        if (parent.get(u) != u) {
            parent.put(u, find(parent.get(u)));
        }
        return parent.get(u);
    }

    public void union(int u, int v) {
        int rootU = find(u);
        int rootV = find(v);

        if (rootU != rootV) {
            parent.put(rootU, rootV);
            size.put(rootV, size.get(rootU) + size.get(rootV));
        }
    }

    public int getSize(int u) {
        int root = find(u);
        return size.get(root);
    }
}

class Main {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            UnionFind uf = new UnionFind();

            int N = Integer.parseInt(sc.next());
            for (int i = 0; i < N - 1; ++i) {
                int u = Integer.parseInt(sc.next());
                int v = Integer.parseInt(sc.next());
                uf.union(u, v);
            }

            int root = uf.find(1);

            // The minimum operation count is the size of the root's set minus 1
            int minimumOperationCount = uf.getSize(root) - 1;

            System.out.println(minimumOperationCount);

        }
    }
}