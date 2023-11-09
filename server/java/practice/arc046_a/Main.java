import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            
            int res = -1;
            int num = 1;
            int count = 0;
            while(true){
                if(isSameNumber(num)){
                    count++;
                    if(count == N){
                        res = num;
                        break;
                    }
                }
                num++;
            }

            System.out.println(res);
        }
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