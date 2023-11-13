import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            int X = Integer.parseInt(sc.next());
            
            int sum = 0;
            for(int i=0; i<N; ++i){
                int num = Integer.parseInt(sc.next());
                if(num <= X){
                    sum += num;
                }
            }

            System.out.println(sum);
        }
    }
}