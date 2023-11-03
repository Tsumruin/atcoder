import java.util.*;

public class Main {
    public static void main(String[] args) {
        soluton();
    }

    private static void soluton(){
        try (Scanner sc = new Scanner(System.in)) {
            long N = Long.parseLong(sc.next());
        
            long num = N;
            while(true){
                if(0 == num % 2l){
                    num /= 2l;
                }
                else{
                    break;
                }
            }

            boolean flag = true;
            while(true){
                if(1l == num) {
                    break;
                }
                else{
                    if(0 == num % 3l){
                        num /= 3l;
                        continue;
                    }
                    else{
                        flag = false;
                        break;
                    }
                }
            }

            if(flag){
                System.out.println("Yes");
            }
            else{
                System.out.println("No");
            }
        }
    }

    private static long calc(long x, long y){
        return (long)Math.pow(2, x) * (long)Math.pow(3, y);
    }
}