import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            long A = Long.parseLong(sc.next());
            long B = Long.parseLong(sc.next());
            long C = Long.parseLong(sc.next());
            long D = Long.parseLong(sc.next());

            long lcmNum = lcm(C, D);

            long tmpA = A - 1;

            long sumB = (B / C) + (B / D) - (B / lcmNum);
            long sumA = (tmpA / C) + (tmpA / D) - (tmpA / lcmNum);

            long res = B - A + 1 - (sumB - sumA);
            System.out.println(res);

        }
    }


    private static long gcd(long a, long b){
        if(a < b){
            long tmp = a;
            a = b;
            b = tmp;
        }

        long rem = a % b;
        if(0 == rem){
            return b;
        }
        else{
            return gcd(b, rem);
        }
    }

    private static long lcm(long a, long b) {
		return a * b / gcd(a, b);
	}
}