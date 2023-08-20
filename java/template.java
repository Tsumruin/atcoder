import java.util.*;


public class Main {
    public static void main(String[] args) {
        try(Scanner sc = new Scanner(System.in)) {
            long N = sc.nextLong();

            long[] A = new long[N];
            Arrays.setAll(A, i -> sc.nextLong());
        }

        System.out.println("入力桁数：" + digits(N));

        for(long a : A){
            System.out.print(a + ", ");
        } 
    }

    public static int digits(long num) {
        /*
         * digits method
         * @param num Long integer
         * @return the digits of the number num;
        */
        return String.valueOf(num).length();
    }
}
