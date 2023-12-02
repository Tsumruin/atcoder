import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            int X = Integer.parseInt(sc.next());
            
            int num = X;
            int res = 1;
            while(num > 0){
                if(isExp(num)){
                    res = num;
                    break;
                }
                num--;
            }

            System.out.println(res);
        }
    }

    private static boolean isExp(int num){

        for(int b=1; b<=Math.sqrt(num); ++b){
            for(int p=2; p<num; ++p){
                int exp = (int)Math.pow(b, p);

                // System.out.println(exp);

                if(exp > num) break;
                if(num == exp){
                    return true;
                }
            }
        }

        return false;
    }
}