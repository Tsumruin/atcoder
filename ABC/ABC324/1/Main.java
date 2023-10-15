import java.util.*;

public class Main {
    public static void main(String[] args) {
        soluton();
    }

    private static void soluton(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            
            Integer A[] = new Integer[N];
            for (int i = 0; i < N; i++) {
                A[i] = sc.nextInt();
            }

            int num = A[0];

            boolean flag = true;
            for (int i = 1; i < N; i++) {
                if(num != A[i]){
                    flag = false;
                    break;
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
}