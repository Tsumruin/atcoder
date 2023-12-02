import java.util.*;

public class Main {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            String str = sc.next();

            int sum = a + b + c;

            System.out.println(sum + " " + str);
        }
    }
}
