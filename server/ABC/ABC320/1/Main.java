import java.util.*;


public class Main {
    public static void main(String[] args) {
        soluton1();
    }

    private static void soluton1(){
        try (Scanner sc = new Scanner(System.in)) {
            int A = Integer.parseInt(sc.next());
            int B = Integer.parseInt(sc.next());
            
            int res = (int)Math.pow(A, B) + (int)Math.pow(B, A);
            System.out.println(res);
        }
    }
    
}