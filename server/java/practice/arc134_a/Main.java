import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            long L = Long.parseLong(sc.next());
            long W = Long.parseLong(sc.next());
            
            long[] A = new long[N];
            for(int i=0; i<N; ++i){
                A[i] = Long.parseLong(sc.next());
            }

            long count = 0;
            for(int i=0; i<N-1; ++i){
                long dif = A[i+1] - A[i] - W;
                if(dif > 0){
                    count += dif % W == 0? dif / W: 1 + dif / W;
                }
                // System.out.println("[loop]count: " + count);
            }

            count += A[0] % W == 0? A[0] / W: 1 + A[0] / W;
            // System.out.println("[first]count: " + count);

            long last = A[N-1] + W;
            count += (L - last) % W ==0? (L - last) / W: 1+ (L - last) / W;

            System.out.println(count);

        }
    }
}