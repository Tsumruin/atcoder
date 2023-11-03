class Main {
    public static void main(String args[]) {
        /*
         * 税抜き価格から税込み価格を求めるプログラム
        */

        /* 1. 変数を宣言 */
        int price = 100; // 税抜き価格
        float taxRate = 0.10f; //税率(現在の10%)

        /* 2. 変数を処理 */
        float result = price * (1 + taxRate); // 税抜き価格×(1+税率)

        /* 3. 処理した結果を出力 */
        System.out.println(price + "円の税込み価格は" + result + "円です。");

    }
}