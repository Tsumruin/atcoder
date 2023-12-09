import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution() {
        try (Scanner sc = new Scanner(System.in)) {
            long D = Long.parseLong(sc.next());
            long sqrtD = (long) Math.ceil(Math.sqrt(D));

            long res = Long.MAX_VALUE;
            for (long x = 0; x <= sqrtD; ++x) {
                // System.out.println("x:" + x);
                long C = D - x * x;
                if (C <= 0) {
                    res = Math.min(res, Math.abs(C));
                } else {
                    long y1 = (long) Math.floor(Math.sqrt(C));
                    // System.out.println("y1:" + y1);
                    res = Math.min(res, Math.abs(C - y1 * y1));
                    long y2 = (long) Math.ceil(Math.sqrt(C));
                    // System.out.println("y2:" + y2);
                    res = Math.min(res, Math.abs(C - y2 * y2));
                }
            }

            System.out.println(res);

        }
    }
}
