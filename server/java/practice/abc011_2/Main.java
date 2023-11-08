import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            String S = sc.next();
            
            String first = S.substring(0, 1).toUpperCase();

            String res = first;
            if(S.length() > 1){
                String second = S.substring(1).toLowerCase();          
                res += second;
            }

            System.out.println(res);

        }
    }

}