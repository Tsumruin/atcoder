import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            long N = Long.parseLong(sc.next());
            long M = Long.parseLong(sc.next());
            
            List<Long> L = new ArrayList<>();
            List<Long> R = new ArrayList<>();

            for(int i=0; i<M; ++i){
                L.add(Long.parseLong(sc.next()));
                R.add(Long.parseLong(sc.next()));
            }

            long leftMax = Collections.max(L);
            long rightMin = Collections.min(R);

            long res = rightMin - leftMax >= 0? rightMin - leftMax + 1: 0;

            System.out.println(res);
        }
    }
}