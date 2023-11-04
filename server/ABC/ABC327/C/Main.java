import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            int[][] A = new int[9][9];
            for(int i=0; i<9; ++i){
                for(int k=0; k<9; ++k){
                    A[i][k] = Integer.parseInt(sc.next());
                }
            }

            int[] check = new int[9];
            for(int i=0; i<9; ++i){
                check[i] = 0;
            }

            for(int i=0; i<9; ++i){

                for(int l=0; l<9; ++l){
                    check[l] = 0;
                }

                for(int k=0; k<9; ++k){
                    check[id(A[i][k])]++;
                    if(check[id(A[i][k])] > 1){
                        System.out.println("No");
                        return;
                    }
                }
            }


            for(int k=0; k<9; ++k){

                for(int l=0; l<9; ++l){
                    check[l] = 0;
                }

                for(int i=0; i<9; ++i){
                    check[id(A[i][k])]++;
                    if(check[id(A[i][k])] > 1){
                        System.out.println("No");
                        return;
                    }
                }
            }


            for(int bx = 0; bx < 9; bx+=3) {
                for(int by= 0; by < 9; by+=3) {

                    for(int l=0; l<9; ++l){
                        check[l] = 0;
                    }

                    for(int i = 0+bx; i < 3+bx; i++) {
                        for(int k= 0+by; k < 3+by; k++) {
                            check[id(A[i][k])]++;
                            if(check[id(A[i][k])] > 1){
                                System.out.println("No");
                                return;
                            }
                        }
                    }
                }
            }


            System.out.println("Yes");


        }
    }

    private static int id(int num){
        return num - 1;
    }
}