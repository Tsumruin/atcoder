import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            int Q = Integer.parseInt(sc.next());

            long[] A = new long[N];
            for(int i=0; i<N; ++i){
                long num = Long.parseLong(sc.next());
                A[i] = num;
            }

            Arrays.sort(A);

            long[] S = new long[N+1]; S[0] = 0;
            for(int i=0; i<N; ++i){
                S[i+1] = S[i] + A[i];
            }

            for(int i=0; i<Q; ++i){
                long X = Long.parseLong(sc.next());

                int id = thisSearch(A, N, X);

                long plus = (S[N] - S[id]) + X * (id);
                long minus = S[id] + X * (N - id);

                long res = plus - minus;

                System.out.println(res);

            }

        }
    }

    private static int thisSearch(long [] array, int n, long key){
        int start = 0; //　探索範囲開始インデックス
        int end = n - 1; // 探索範囲末尾インデックス
        do {
            //中間インデックスを取得
            int middle = (start + end) / 2;
            if (array[middle] < key) {
                start = middle + 1;
                //キー値が中間値よりも小さければ、末尾インデックスを中間より一つ前に設定(探索範囲を後半に分ける)
            } else {
                end = middle - 1;
            }
            //開始インデックスが末尾インデックス以上になれば超えてしまっているので終了
        }while (start <= end);
        return start;
    }
}