import java.util.*;

public class Main {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            
            int[] A = new int[N];
            for(int i=0; i<N; ++i){
                A[i] = Integer.parseInt(sc.next());
            }
        }
    }
}

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
            