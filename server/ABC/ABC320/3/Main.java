import java.util.*;


public class Main {
    public static void main(String[] args) {
        soluton1();
    }

    private static void soluton1(){
        try (Scanner sc = new Scanner(System.in)) {
            int M = Integer.parseInt(sc.next());

            List<String> S = new ArrayList<>();
            for(int i=0; i<3; ++i){
                String tmp = sc.next();
                S.add(tmp);
            }


            int[] check = new int[M+10];
            int count = 0;
            int tmp = 0;
            while(true){
                for(int iter=M-1; iter>=0; iter--){
                    for(int k=0; k<3; ++k){
                        String currentString = S.get(k);
                        int num = Character.getNumericValue(currentString.charAt(iter)); 
                        check[num] = 1;
                    }


                    int res = -1;
                    for(int i=0; i<10; i++){
                        if(check[i] > 0) continue;
                        else{
                            res = i;
                            count++;
                        }

                        if(count > 1) break;
                    }

                    if(count == 1){
                        System.out.println(iter - 1 + tmp);
                        System.exit(0);
                    }
                }
                
                if(count > 0){
                    break;
                }
                tmp += M;
            }
        

            System.out.println(-1);

        }
    }

    
    
}