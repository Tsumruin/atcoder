import java.util.*;

public class Main {
    public static void main(String[] args) {
        soluton1();
    }

    private static void soluton1(){
        try (Scanner sc = new Scanner(System.in)) {
            long N = Long.parseLong(sc.next());
            
            long[] count = new long[200];
            long res = 0L;

            for(long i=0; i<N; ++i){
                long num = Long.parseLong(sc.next());
                long id = num % 200L;
                res += count[(int)id]++;
            }

            System.out.println(res);
        }
    }
    
}