import java.util.*;

public class Main {
    public static void main(String[] args) {
        soluton();
    }

    private static void soluton(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());

            int[] W = new int[N];
            int[] X = new int[N];
            for(int i=0; i<N; ++i){
                W[i] = Integer.parseInt(sc.next());
                X[i] = Integer.parseInt(sc.next());
            }
            
            int maximum = -1;
            for(int s=0; s<24; ++s){
                int count = 0;
                for(int i=0; i<N; ++i){
                    int currentTime = convertTime(s, X[i]);
                    if(currentTime >= 9 && currentTime < 18){
                        count += W[i];
                    }
                }

                maximum = Math.max(maximum, count);
            }
            
            System.out.println(maximum);

        }
    }

    private static int convertTime(int s, int X){
        return (s + X) % 24;
    }
}