import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution() {
        try (Scanner sc = new Scanner(System.in)) {
            String S = sc.next();
            String T = sc.next();

            int len1 = len(S);
            int len2 = len(T);

            String res = len1 == len2? "Yes": "No";
            System.out.println(res);

        }
    }

    private static int len(String str) {
        switch (str) {
            case "AB":
            case "BC":
            case "CD":
            case "DE":
            case "EA":
            case "BA":
            case "CB":
            case "DC":
            case "ED":
            case "AE":
                return 1;
            default:
                return 2;
        }
    }
}
