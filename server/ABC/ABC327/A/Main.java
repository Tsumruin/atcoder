import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            String S = sc.next();
            
            String res = "No";
            for(int i=0; i<N-1; ++i){
                String one = S.substring(i, i+1);
                String two = S.substring(i+1, i+2);
                if(one.equals("a")){
                    if(two.equals("b")){
                        res = "Yes";
                        break;
                    }
                }
                else if(one.equals("b")){
                    if(two.equals("a")){
                        res = "Yes";
                        break;
                    }
                }
            }

            System.out.println(res);
        }
    }
}