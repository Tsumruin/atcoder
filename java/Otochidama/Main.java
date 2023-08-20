import java.util.*;

public class Main {
    public static void main(String[] args) {
        try(Scanner sc = new Scanner(System.in)) {
            int N = sc.nextInt();
            long Y = sc.nextLong();
            
            int res_10000 = -1;
            int res_5000 = -1;
            int res_1000 = -1;

            boolean flg = false;
            for(int i=0; i<=N; ++i){
                for(int k=0; k<=N; ++k){
                    int remainder = N - i - k; // the number of 1000 bills

                    if(remainder < 0) continue;

                    long sum = 10000L * i + 5000L * k + 1000L * remainder; // sum of the money

                    if(Y == sum){
                        res_10000 = i;
                        res_5000 = k;
                        res_1000 = remainder;
                        flg = true;
                        break;
                    }
                }
                if(flg) break;
            }

            System.out.println(res_10000 + " " + res_5000 + " " + res_1000);

        }
    }

    public static int digits(int num) {
        /*
         * digits method
         * @param num Long integer
         * @return the digits of the number num;
        */
        return String.valueOf(num).length();
    }
}
