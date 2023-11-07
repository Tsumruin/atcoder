import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            int M = Integer.parseInt(sc.next());
            
            List<Integer> P = new ArrayList<>();
            List<Integer> C = new ArrayList<>();
            List<List<Integer>> F = new ArrayList<>();

            for(int i=0; i<N; ++i){
                int tmpP = Integer.parseInt(sc.next());
                P.add(tmpP);

                int tmpC = Integer.parseInt(sc.next());
                C.add(tmpC);

                List<Integer> tmpF = new ArrayList<>();
                for(int k=0; k<tmpC; ++k){
                    int tmpTmpF = Integer.parseInt(sc.next());
                    tmpF.add(tmpTmpF);
                }
                F.add(tmpF);
            }

            boolean find = false;
            for(int i=0; i<N; ++i){
                // System.out.println("i:" + i);

                if(find) break;
                int pI = P.get(i);
                int cI = C.get(i);
                for(int k=0; k<N; ++k){
                    // System.out.println("k:" + k);

                    if(find) break;
                    int pK = P.get(k);
                    int cK = C.get(k);

                    // PkがPiの上位互換の可能性あり
                    // Pkの方が安い
                    boolean flag = true;
                    if(pI >= pK){
                        // Pkの方が機能が多い
                        if(cI <= cK){
                            for(int fI: F.get(i)){
                                List<Integer> fK = F.get(k);
                                if(!fK.contains(fI)){
                                    // System.out.println("fI:" + fI + "fK:" + fK);
                                    flag = false;
                                    break;
                                }
                            }
                            
                            if(!flag) continue;

                            if(pI > pK || cI < cK){
                                find = true;
                                break;
                            }
                            
                        }
                        
                    }
                }
            }

            System.out.println(find ? "Yes": "No");

        }
    }
}