class Main {
    public static void main(String args[]) {
        /*
         * 繰り返し処理の検証
         * 1~100の整数の和を計算するプログラム
        */

        /* 1. for文 */
        int sum_for = 0;
        for(int i=1; i<=100; ++i){
            sum_for += i;
        }
        System.out.println("for文の結果: " + sum_for);

        /* 2. while文 */
        int sum_while = 0;
        int k = 1;
        while(k <= 100){
            sum_while += k;
            k++;
        }
        System.out.println("while文の結果: " + sum_while);

        /* 3. do while文 */
        int sum_doWhile = 0;
        int l = 1;
        do{
            sum_doWhile += l;
            l++;
        } while(l <= 100);
        System.out.println("do while文の結果: " + sum_doWhile);


        /**
         * 
         * 
         * 
        */


    }
}