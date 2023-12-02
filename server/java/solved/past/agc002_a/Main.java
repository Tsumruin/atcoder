import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            long a = Long.parseLong(sc.next());
            long b = Long.parseLong(sc.next());

            String res = "";
            if(a > 0 && b > 0){
                res = "Positive";
            }
            else if(a >= 0 && b <= 0){
                res = "Zero";
            }
            else if(a <= 0 && b >= 0){
                res = "Zero";
            }
            else{
                long dif = b - a;
                if(0 == dif % 2){
                    res = "Negative";
                }
                else{
                    res = "Positive";
                }
            }

            System.out.println(res);
            
        }
    }
}

