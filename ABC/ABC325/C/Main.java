import java.util.*;

public class Main {
    public static void main(String[] args) {
        soluton();
    }

    public static int H;
    public static int W;
    public static char[][] S;
    public static int[][] d;
    public static int count = 1;

    private static void soluton(){
        try (Scanner sc = new Scanner(System.in)) {
            H = Integer.parseInt(sc.next());
            W = Integer.parseInt(sc.next());
            
            S = new char[H][W];
            d = new int[H][W];
            for(int i=0; i<H; ++i){
                String tmp = sc.next();
                for(int k=0; k<W; ++k){
                    S[i][k] = tmp.charAt(k);
                    d[i][k] = 0;
                }
            }

            for(int i=0; i<H; ++i){
                for(int k=0; k<W; ++k){
                    if('#' == S[i][k] && d[i][k] == 0){
                        // System.out.println("(" + i + ", " + k + ")");
                        infection(i, k, count);
                        count++;
                    }
                    
                }
            }

            // for(int i=0; i<H; ++i){
            //     for(int k=0; k<W; ++k){
            //         System.out.print(d[i][k]);
            //     }
            //     System.out.println();
            // }

            System.out.println(count - 1);

        }
    }

    private static void infection(int i, int k, int num){
        if(is_field(i, k)){
            if('#' == S[i][k] && d[i][k] == 0){
                d[i][k] = num;
                infection(i-1, k-1, num);
                infection(i-1, k, num);
                infection(i-1, k+1, num);
                infection(i, k-1, num);
                infection(i, k+1, num);
                infection(i+1, k-1, num);
                infection(i+1, k, num);
                infection(i+1, k+1, num);
            }
            
        }
    }

    
    private static boolean is_field(int i, int k){
        if(0 <= i && i < H && 0 <= k && k < W){
            return true;
        }
        else{
            return false;
        }
    }

}