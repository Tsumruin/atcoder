import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution2();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            String S = sc.next();
            long K = Long.parseLong(sc.next());

            int SLength = S.length();
            
            String first = S.substring(0, 1);
            String last = S.substring(SLength-1, SLength);

            long count = 1;
            long replaceSum = 0;
            for(int i=0; i<SLength-1; ++i){
                String Snow = S.substring(i, i+1);
                String Snext = S.substring(i+1, i+2);

                if(Snow.equals(Snext)){
                    count++;
                    // System.out.println("same!");
                }
                else{
                    replaceSum += replaceNum(count);
                    count = 1;
                    continue;
                }

                if(i == SLength-2){
                    replaceSum += replaceNum(count);
                    count = 0;
                }
            }

            long firstSameNum = 1;
            for(int i=0; i<SLength-1; ++i){
                String Snow = S.substring(i, i+1);
                String Snext = S.substring(i+1, i+2);
                if(Snow.equals(Snext)){
                    firstSameNum++;
                    continue;
                }
                else{
                    break;
                }
            }

            boolean flag = false;
            if(firstSameNum != SLength){
                for(int i=SLength; i>=0; --i){
                    String Snow = S.substring(i-1, i);
                    String Snext = S.substring(i-2, i-1);
                    if(Snow.equals(Snext)){
                        firstSameNum++;
                        continue;
                    }
                    else{
                        break;
                    }
                }
            }
            else{
                flag = true;
            }

            if(first.equals(last)){
                replaceSum--;
                if(!flag){
                    firstSameNum++;
                }
            }
            // System.out.println("firstSameNum: " + firstSameNum);
            // System.out.println("replaceSum: " + replaceSum);

            long res = replaceSum * K + replaceNum(firstSameNum) * K;

            System.out.println(res);
        }
    }

    private static void solution2(){
        try (Scanner sc = new Scanner(System.in)) {
            String s = sc.next();
            long k  = sc.nextLong();
            long count = 0;
            for (int i = 0; i <s.length()-1; i++) {
                if(s.charAt(i)==s.charAt(i+1))
                {
                    count++;
                    i++;
                }
            }
            if(allsame(s))
            {
                System.out.println((s.length()*k)/2);
                return ;
            }
            if(s.charAt(0)==s.charAt(s.length()-1))
            {
                long total = count*k;
                int i =0;
                long first  =1;
                while(i+1<s.length()&&s.charAt(i+1)==s.charAt(0))
                {
                    i++;
                    first++;
                }
                long last = 1;
                i = s.length()-1;
                while(i-1>=0&&s.charAt(i-1)==s.charAt(s.length()-1))
                {
                    i--;
                    last++;
                }
                long minus = ((first/2l)+(last/2l)-(first+last)/2l)*(k-1l);
                System.out.println(total-minus);
                
            }
            else
            {
                System.out.println(count*k);
            }  
        } 
    }

    private static boolean allsame(String s)
    {
        for (int i = 1; i <s.length(); i++) {
            if(s.charAt(i)!=s.charAt(0))
            {
                return false;
            }
        }
        return true;
    }

    private static long replaceNum(long N){
        return (long)N / 2;
    }
}