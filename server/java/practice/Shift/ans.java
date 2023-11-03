package Shift;

import java.util.*;

public class ans {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {

String s = sc.next();
s = s.replaceAll("0", "");

System.out.println(s.length());

// bitの総orに対して右端から0の数を数える
int N = sc.nextInt();
int bit = 0;
for (int i = 0; i < N; i++) {
    bit |= sc.nextInt();
}
System.out.println(Integer.numberOfTrailingZeros(bit));
            
        }
    }
}
