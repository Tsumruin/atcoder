package Product;

import java.util.*;

public class Main {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            
            if(0 == a*b % 2) {
                System.out.println("Even");
            }
            else {
                System.out.println("Odd");
            }

        }
    }
}
