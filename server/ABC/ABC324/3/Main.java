import java.util.*;

public class Main {
    public static void main(String[] args) {
        soluton();
    }

    private static void soluton(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());

            String Td = sc.next();

            List<String> S = new ArrayList<>();
            for(int i=0; i<N; ++i){
                S.add(sc.next());
            }

            List<Integer> res = new ArrayList<>();

            for(int i=0; i<N; ++i){
                String T = S.get(i);

                int targetLen = Td.length();
                int thisLen = T.length();

                if(targetLen == thisLen){

                    if(Td.equals(T)){
                        res.add(i);
                        continue;
                    }
                    else{
                        for(int k=0; k<targetLen; ++k){
                            if(Td.charAt(k) != T.charAt(k)){
                                String Tdsub = Td.substring(k+1);
                                String Tsub = T.substring(k+1);

                                // System.out.println("sub: " + Tsub);
                                // System.out.println("T: " + Tdsub);

                                if(Tsub.equals(Tdsub)){
                                    res.add(i);
                                }
                                break;
                            }
                        }
                    }
                }
                else if(targetLen > thisLen){
                    if(targetLen - thisLen != 1) continue;
                    int targetId = 0;
                    int thisId = 0;


                    while(targetId < targetLen){
                        if(targetId == targetLen - 1){
                            res.add(i);
                            break;
                        }
                        if(Td.charAt(targetId) != T.charAt(thisId)){
                            targetId++;
                            String Tdsub = Td.substring(targetId);
                            String Tsub = T.substring(thisId);

                            
                            // System.out.println("sub: " + Tsub);
                            // System.out.println("T: " + Tdsub);

                            if(Tsub.equals(Tdsub)){
                                res.add(i);
                            }
                            break;
                        }
                        targetId++;
                        thisId++;
                    }
                }
                else{
                    if(thisLen - targetLen != 1) continue;

                    int targetId = 0;
                    int thisId = 0;


                    while(thisId < thisLen){
                        if(thisId == thisLen - 1){
                            res.add(i);
                            break;
                        }
                        if(Td.charAt(targetId) != T.charAt(thisId)){
                            thisId++;
                            String Tdsub = Td.substring(targetId);
                            String Tsub = T.substring(thisId);

                            
                            // System.out.println("sub: " + Tsub);
                            // System.out.println("T: " + Tdsub);

                            if(Tsub.equals(Tdsub)){
                                res.add(i);
                            }
                            break;
                        }
                        targetId++;
                        thisId++;
                    }
                }
                
            }

            int resSize = res.size();
                System.out.println(resSize);
                for(int i=0; i<resSize; ++i){
                    System.out.print(res.get(i)+1 + " ");
            }
            
        }
    }


}