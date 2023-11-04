import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            long B = Long.parseLong(sc.next());

            // long num = 1;
            long res = -1;
            // while(Math.pow(num, num) <= B){
            //     if(num < 15){
            //         long tmp = (long)Math.pow(num, num);
            //         if(tmp == B){
            //             res = num;
            //             break;
            //         }
            //         System.out.println(tmp);
            //         num++;
            //     }
            //     if(num == 15){
            //         String B_str = Long.toString(B);

            //     }
            // }

            for(long num = 1;  num < 16; ++num){
                if(num < 15){
                    if(Math.pow(num, num) == B){
                        res = num;
                        break;
                    }
                }
                else if(num == 15){
                    String B_str = Long.toString(B);
                    if(B_str.equals("437893890380859375")){
                        res = num;
                        break;
                    }
                }
            }

            if(res < 0){
                System.out.println(-1);
            }
            else{
                System.out.println(res);
            }
        }
    }
}