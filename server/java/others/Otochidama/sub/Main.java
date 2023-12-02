import java.util.*;

public class Main {
    public static void main(String[] args) {
        try(Scanner sc = new Scanner(System.in)) {
            long N = sc.nextLong();
            long Y = sc.nextLong();
            
            // Initialize
            long res_10000 = -1;
            long res_5000 = -1;
            long res_1000 = -1;

            long Y_1000 = Y / 1000L; // reduction
            long dif = Y_1000 - (long)N; // 

            long dif_mod = dif % 4;
            if(dif_mod >= 0){

                for(long num_10000 = dif_mod; num_10000<=N; num_10000 += 4){
                    long num_5000 = ( dif - 9 * num_10000 ) / 4;

                    if(num_5000 < 0) continue;

                    long num_1000 = N - num_10000 - num_5000;

                    if(num_1000 < 0) continue;

                    res_10000 = num_10000;
                    res_5000 = num_5000;
                    res_1000 = num_1000;

                    break;
                }
            }

            System.out.println(res_10000 + " " + res_5000 + " " + res_1000);

        }
    }

}
