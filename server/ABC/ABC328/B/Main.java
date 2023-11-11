import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            
            int sum = 0;
            for(int i=1; i<=N; ++i){
                int D = Integer.parseInt(sc.next());

                int month = i;
                if(!isSameNumber(i)) continue;


                // System.out.println(month);
                int target = month % 10;

                for(int num = 1; num<=D; ++num){
                    if(isSameNumberToTarget(num, target)){
                        // System.out.println(num);
                        sum++;
                    }
                }

            }

            System.out.println(sum);


        }
    }

    private static boolean isSameNumberToTarget(int num, int target){

        boolean flag = true;
        int tenpNumber = num;

        int digit = target % 10; 

        while (tenpNumber != 0) {
            if(digit != tenpNumber % 10){
                flag = false;
                break;
            } 
            tenpNumber /= 10;
        }

        return flag;
    }


    
    private static boolean isSameNumber(int num){

        boolean flag = true;
        int tenpNumber = num;

        int digit = tenpNumber % 10; 
        tenpNumber /= 10;

        while (tenpNumber != 0) {
            if(digit != tenpNumber % 10){
                flag = false;
                break;
            } 
            tenpNumber /= 10;
        }

        return flag;
    }
}