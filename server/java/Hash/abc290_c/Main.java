import java.util.*;

public class Main {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            int K= Integer.parseInt(sc.next());
            
            Set<Integer> set = new HashSet<>();
            for(int i=0; i<N; ++i){
                int num = Integer.parseInt(sc.next());
                set.add(num);
            }

            int res = -1;
            for(int k=0; k<K; ++k){
                if(set.contains(k)){
                    if(k == K-1){
                        res = K;
                        break;
                    }
                    else{
                        continue;
                    }
                }
                else{
                    res = k;
                    break;
                }
            }

            System.out.println(res);

        }
    }
}