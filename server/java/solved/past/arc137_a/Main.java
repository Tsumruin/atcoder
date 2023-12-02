import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            long L = Long.parseLong(sc.next());
            long R = Long.parseLong(sc.next());
            
            long maxDif = R - L;

            long res = -1;
            boolean flag = false;
            for(long dif=maxDif; dif>0; --dif){
                long l = L;
                long r = l + dif;
                while(r <= R){
                    // System.out.println("l:" + l);
                    // System.out.println("r:" + r);
                    if(1 == gcd(l, r)){
                        res = dif;
                        flag = true;
                        break;
                    }
                    l++;
                    r++;
                }
                if(flag) break;
            }

            System.out.println(res);

        }
    }

    private static long gcd(long a, long b){
        if(a < b){
            long tmp = a;
            a = b;
            b = tmp;
        }

        long rem = a % b;
        if(0 == rem){
            return b;
        }
        else{
            return gcd(b, rem);
        }
    }
}