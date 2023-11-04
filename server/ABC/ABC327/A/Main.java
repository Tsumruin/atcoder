import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            
            int[] A = new int[N];
            for(int i=0; i<N; ++i){
                A[i] = Integer.parseInt(sc.next());
            }
        }
    }
}