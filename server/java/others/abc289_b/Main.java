import java.util.*;

public class Main {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            int M = Integer.parseInt(sc.next());
            
            int[] A = new int[M];
            for(int i=0; i<M; ++i){
                A[i] = Integer.parseInt(sc.next());
            }

            Deque<Integer> q = new ArrayDeque<>();
            List<Integer> res = new ArrayList<>();

            int a_iter = 0;
            for(int num=1; num<=N; ++num){
                if(a_iter < M && num == A[a_iter]){
                    q.addLast(num);
                    a_iter++;
                }
                else{
                    res.add(num);
                    while(!q.isEmpty()){
                        res.add(q.removeLast());
                    }
                    
                }
            }  

            for (Integer n: res) {
                System.out.print(n + " ");
            }
            System.out.println();
        }
    }
}