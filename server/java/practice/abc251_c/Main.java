import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            
            Map<String, Poem> hashMap = new HashMap<>();
            for(int i=0; i<N; ++i){
                int iter = i + 1;
                String S = sc.next();
                int T = Integer.parseInt(sc.next());
                if(!hashMap.containsKey(S)){
                    Poem poem = new Poem(iter, T);
                    hashMap.put(S, poem);
                }
            }

            System.out.println(hashMap);
            System.out.println(hashMap.entrySet());
            List<Map.Entry<String, Poem>> entryList = new ArrayList<>(hashMap.entrySet());
            System.out.println(entryList);

            entryList.sort(Comparator.comparingInt((Map.Entry<String, Poem> entry) -> -entry.getValue().getScore())
            .thenComparingInt(entry -> entry.getValue().getIter()));

            // Displaying the sorted list
            for (Map.Entry<String, Poem> entry : entryList) {
                System.out.println(entry.getKey() + ": " + entry.getValue());
            }

            System.out.println(entryList.get(0).getValue().getIter());
        }
    }
}

class Poem {
    private int iter;
    private int score;

    public Poem(int iter, int score){
        this.iter = iter;
        this.score = score;
    }

    public void setIter(int iter){
        this.iter = iter;
    }

    public int getIter(){
        return iter;
    }

    public void setScore(int score){
        this.score = score;
    }
    
    public int getScore(){
        return score;
    }

    @Override
    public String toString() {
    return "Poem{" +
            "iter=" + iter +
            ", score=" + score +
            '}';
    }
}