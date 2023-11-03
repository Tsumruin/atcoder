import java.util.*;

public class Main {
    public static void main(String[] args) {
        soluton();
    }

    private static void soluton(){
        try (Scanner sc = new Scanner(System.in)) {
            String S = sc.next();
            
            boolean flg = true;
            for(int i=0; i<S.length(); ++i){
                if(0 != i % 2){ // 添え字が偶奇逆
                    String tmp = S.substring(i, i+1);
                    //  System.out.println(tmp);
                    if(tmp.equals("0")){
                        continue;
                    }
                    else{
                        flg = false;
                        break;
                    }
                }
                else{
                    continue;
                }
            }

            if(flg){
                System.out.println("Yes");
            }
            else{
                System.out.println("No");
            }
        }
    }
}