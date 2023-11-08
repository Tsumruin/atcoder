import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            long H = Long.parseLong(sc.next());
            long W = Long.parseLong(sc.next());

            long res = H * W / 2;
            if(0 != H % 2 && 0 != W % 2) res += 1;

            if(1 == H ||1 == W) res = 1;

            System.out.println(res);


        }
    }

}