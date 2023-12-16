import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            
            String res = "";
            for(int i=0; i<N; ++i){
                res += Integer.toString(N);
            }

            System.out.println(res);
        }
    }
}


