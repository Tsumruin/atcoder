import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            int Q = Integer.parseInt(sc.next());

            String S = sc.next();

            int[] sSum = new int[N];
            sSum[0] = 0;
            for(int i=0; i<N-1; ++i){
                String str1 = S.substring(i, i+1);
                String str2 = S.substring(i+1, i+2);

                int same = str1.equals(str2) ? 1: 0;
                sSum[i+1] = sSum[i] + same;
            }

            for(int i=0; i<Q; ++i){
                int l = Integer.parseInt(sc.next());
                int r = Integer.parseInt(sc.next());
                l--; r--;
                
                int res = sSum[r] - sSum[l];
                System.out.println(res);
            }


        }
    }
}