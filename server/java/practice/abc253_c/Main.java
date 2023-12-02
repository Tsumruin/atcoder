import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            int Q = Integer.parseInt(sc.next());
            
            Map<Integer, Integer> treeMap = new TreeMap<>();
            Queue<Integer> minQ = new PriorityQueue<Integer>();
            Queue<Integer> maxQ = new PriorityQueue<Integer>(Collections.reverseOrder());

            for(int i=0; i<Q; ++i){
                int control = Integer.parseInt(sc.next());
                int x = -1;
                switch (control) {
                    case 1:
                        x = Integer.parseInt(sc.next());
                        if(!treeMap.containsKey(x)){
                            treeMap.put(x, 1);
                            minQ.add(x);
                            maxQ.add(x);
                        }
                        else{
                            int nowX = treeMap.get(x);
                            treeMap.replace(x, nowX+1);
                        }
                        break;
                
                    case 2:
                        x = Integer.parseInt(sc.next());
                        int c = Integer.parseInt(sc.next());

                        if(treeMap.containsKey(x)){
                            int nowX = treeMap.get(x);
                            int dif = Math.min(nowX, c);
                            treeMap.replace(x, nowX - dif);

                            if(0 == treeMap.get(x)){
                                treeMap.remove(x);
                                minQ.remove(x);
                                maxQ.remove(x);
                            }
                        }

                        break;
                    case 3:
                        System.out.println(maxQ.peek() - minQ.peek());
                        break;
                    default:
                        break;
                }
            }
        }
    }
}