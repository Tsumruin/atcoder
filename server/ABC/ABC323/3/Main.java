import java.util.*;

public class Main {
    public static void main(String[] args) {
        soluton();
    }

    private static void soluton(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            int M = Integer.parseInt(sc.next());

            int[][] A = new int[M][2];
            for(int i=0; i<M; ++i){
                A[i][0] = i;
                A[i][1] = Integer.parseInt(sc.next());
            }

            int[][] doneArray = new int[N][M];
            
            long maxScore = 0;
            ArrayList<Integer> now = new ArrayList<>();
            for(int i=0; i<N; ++i){
                int count = 0;
                int score = 0;
                String S = sc.next();
                for(int k=0; k<M; ++k){
                    String tmp = S.substring(k, k+1);
                    if(tmp.equals("o")){
                        score += A[k][1];
                        doneArray[i][k] = 1;
                    }
                    else{
                        doneArray[i][k] = 0;
                    }
                }

                score += i+1;
                now.add(score);

                maxScore = Math.max(maxScore, score);
            }

            // for(int i=0; i<N; ++i){
            //     System.out.println(now.get(i));
            // }
            // System.out.println(maxScore);

            // Collections.sort(A, Collections.reverseOrder());
            Sort2DArrayBasedOnColumnNumber(A, 2);


            for(int i=0; i<N; ++i){
                if(now.get(i) == maxScore){
                    System.out.println(0);
                }
                else{
                    int count = 0;
                    long currentScore = now.get(i);
                    for(int k=0; k<M; ++k){
                        int index = A[k][0];
                        if(0 == doneArray[i][index]){
                            currentScore += A[k][1];
                            count++;
                            // System.out.println("current:" + currentScore);

                            if(currentScore > maxScore){
                                System.out.println(count);
                                break;
                            }
                        }
                    }
                }
            }

        }
    }

    private static void Sort2DArrayBasedOnColumnNumber (int[][] array, final int columnNumber){
        Arrays.sort(array, new Comparator<int[]>() {
            @Override
            public int compare(int[] first, int[] second) {
                if(first[columnNumber-1] > second[columnNumber-1]) return -1;
                else return 1;
            }
        });
    }
}