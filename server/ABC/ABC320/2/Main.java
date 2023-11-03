import java.util.*;


public class Main {
    public static void main(String[] args) {
        soluton2();
    }

    private static void soluton2(){
        try (Scanner sc = new Scanner(System.in)) {
            String S = sc.next();
            int S_length = S.length();

            int res = 1;
            for(int i=0; i<S_length; ++i){

                
                for(int k=0; k<S_length; ++k){
                    int frontId = i;
                    int backId = S_length - k - 1;

                    if(frontId >= backId) break;

                    // System.out.println(frontId);
                    // System.out.println(backId);
                    // System.out.println("---");

                    char front = S.charAt(frontId);
                    char back = S.charAt(backId);

                    if(front == back){

                        int count = 0;
                        int tmp = 0;
                        while(true){
                            if(frontId > backId){
                                count = tmp;
                                break;
                            }
                            else if(frontId == backId){
                                count = ++tmp;
                                break;
                            }
                            // System.out.println(frontId);
                            // System.out.println(backId);
                            // System.out.println("---");

                            front = S.charAt(frontId);
                            back = S.charAt(backId);

                            if(front == back){
                                tmp+=2;
                            }
                            else{
                                break;
                            }

                            frontId++;
                            backId--;

                        }

                        res = Math.max(res, count);

                    }

                }
                
            }

            System.out.println(res);
        }
    }

    private static void soluton1(){
        try (Scanner sc = new Scanner(System.in)) {
            String S = sc.next();
            int S_length = S.length();

            int res = -1;
            for(int i=0; i<S_length; ++i){

                int count = -1;
                int tmp = 0;
                int iter = 0;
                boolean flag = false;
                for(int k=0; k<S_length; ++k){
                    int frontId = -1;
                    if(flag){
                        iter++;
                        frontId = i + iter;
                    }
                    else{
                        frontId = i;
                    }

                    int backId = S_length - k - 1;
                    
                    if(frontId > backId) {
                        if(flag){
                            count = tmp;
                            break;
                        }
                        else{
                            break;
                        }
                    }
                    
                    if(frontId == backId){
                        if(flag){
                            count = tmp + 1;
                            break;
                        }
                        else{
                            count = 1;
                            break;
                        }
                    }

                    char front = S.charAt(frontId);
                    char back = S.charAt(backId);

                    System.out.println(frontId);
                    System.out.println(backId);
                    System.out.println("---");

                    if(front == back){
                        tmp += 2;
                        flag = true;
                    }
                    else if(flag){
                        break;
                    }
                    
                    
                }

                res = Math.max(res, count);
                
            }

            System.out.println(res);
        }
    }
    
}