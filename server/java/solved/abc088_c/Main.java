import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            final int N = 3;
            int[][] A = new int[N][N];
            
            boolean flag1 = true;
            boolean flag2 = true;
            boolean flag3 = true;

            int sumA = 0;
            for(int i=0; i<N; ++i){
                for(int k=0; k<N; ++k){
                    A[i][k] = Integer.parseInt(sc.next());
                    sumA += A[i][k];
                }
            }
            if(0 != sumA % 3) flag1 = false;

            int st = sumA / 3;

            int sumB = 0;
            for(int i=0; i<N; i++){
                sumB += A[i][i];
            }
            if(st != sumB) flag2 = false;

            sumB = 0;
            for(int i=0; i<N; i++){
                sumB += A[i][N-i-1];
            }
            if(st != sumB) flag2 = false;


            int dx[][] = {
                {0,1,2},
                {2,1,0}
            };
            int dy[][] = {
                {0,2,1},
                {2,0,1}
            };

            for(int i=0; i<2; ++i){
                for(int k=0; k<2; ++k){    
                    int sumC = 0;
                    for(int l=0; l<3; ++l){
                        sumC += A[dx[i][l]][dy[k][l]];
                    }
                    if(st != sumC) flag3 = false;
                }
            }

            if(flag1 && flag2 && flag3){
                System.out.println("Yes");
            }
            else{
                System.out.println("No");
            }


        }
    }

}