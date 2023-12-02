package Shift;

import java.util.*;

public class Main {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int N = sc.nextInt();

            int minimum = -1;
            for (int i = 0; i < N; i++) {
                int num = sc.nextInt();
                int count = 0;
                while (true) {
                    if (0 == num%2) {
                        num /= 2;
                        count++;
                    }
                    else{
                        break;
                    }
                }
                if(0 == i) minimum = count;
                else{
                    minimum = Math.min(minimum, count);
                }
            }

            System.out.println(minimum);
        }
    }

}
