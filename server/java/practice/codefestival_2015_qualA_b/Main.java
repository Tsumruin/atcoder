import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            
            long sum = 0;

            for(int i=0; i<N; ++i){
                long num = Long.parseLong(sc.next());
                long count = (long)Math.pow(2, N - i - 1);
                // System.out.println(count);
                sum += num * count;
            }
        

            System.out.println(sum);

        }
    }
}