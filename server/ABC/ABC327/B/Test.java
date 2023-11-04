import java.math.BigDecimal;
import java.util.*;

public class Test {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {

            long num = 15;
            long tmp = myPow(num, num);
            System.out.println(num + "^"+ num + " =\t" + tmp);

            System.out.println(0.1);
            System.out.println(new BigDecimal(0.1));


        }

    }

    private static long myPow(long base, long exp){
        long res = 1;

        for(long i=1; i<=exp; ++i){
            res *= base;
        }

        return res;
    }
}