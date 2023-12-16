import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution() {
        try (Scanner sc = new Scanner(System.in)) {
            long N = Long.parseLong(sc.next());

            long tmp = 0;
            long iter = 1;
            long left = 0;
            while (true) {
                tmp += iter;
                iter++;
                left += tmp;
                if (tmp >= N) {
                    break;
                }
            }
            System.out.println(left);
        }
    }

}
