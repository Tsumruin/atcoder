import java.util.*;

class Main {
    public static void main(String args[]){
        /**
         * ABC170 A問題 
         * https://atcoder.jp/contests/abc170/tasks/abc170_a
         */  

        // 標準入力で5つの整数を受け取る
        Scanner sc = new Scanner(System.in);
        int x[] = new int[5];
        for(int i=0; i<5; ++i){
            x[i] = sc.nextInt();
        }
        // x[0]~x[4]に5つの整数を格納済

        /**
         * 各x[0]~x[4]に対して、
         * 値が0かどうかをチェックする。
         */
        for(int i=0; i<5; ++i){
            // x[i]が0のとき
            if(0 == x[i]){
                // i+1を出力して終了
                System.out.println(i+1);
                System.exit(0);
            }
        }
    }
}