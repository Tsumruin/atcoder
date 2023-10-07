import java.util.*;

public class Main {
    public static void main(String[] args) {
        soluton();
    }

    private static void soluton(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());

            int[] A = new int[N];
            for(int i=0; i<N; ++i){
                int count = 0;

                String S = sc.next();
                for(int k=0; k<N; ++k){
                    String tmp = S.substring(k, k+1);
                    if(tmp.equals("o")){
                        count++;
                    }
                }

                // System.out.println(count);
                A[i] = count;

            }

            for(int i=N; i>=0; --i){
                for(int k=0; k<N; ++k){
                    if(A[k] == i){
                        System.out.print(k+1 + " ");
                        
                    }
                }
            }
        }
    }
}