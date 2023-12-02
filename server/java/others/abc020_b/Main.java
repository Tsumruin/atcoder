import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            String A = sc.next();
            String B = sc.next();

            String conNum = A + B;
            Integer num = Integer.parseInt(conNum);
            
            Integer res = num * 2;

            System.out.println(res);
        }
    }

}