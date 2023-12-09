import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution() {
        try (Scanner sc = new Scanner(System.in)) {
            String A = sc.next();
            long B = Long.parseLong(sc.next());

            long lengthA = A.length();
            long modNum = B % lengthA;

            String res;
            if (0 == modNum) {
                res = A.substring((int)lengthA - 1, (int)lengthA);
            } else {
                res = A.substring((int)modNum-1, (int)modNum);
            }

            System.out.println(res);
        }
    }
}