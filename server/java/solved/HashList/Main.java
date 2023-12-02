import java.util.*;

class Main {
    public static void main(String[] args) {
        solution3();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            int Q = Integer.parseInt(sc.next());
            
            List<Integer>[] nums = new List[1000000000];
            for (int i = 0; i < nums.length; ++i) {
                nums[i] = new ArrayList<>();
            }

            for(int i=0; i<N; ++i){
                int num = Integer.parseInt(sc.next());
                nums[num].add(i+1);
            }

            for(int i=0; i<Q; ++i){
                int x = Integer.parseInt(sc.next());
                int k = Integer.parseInt(sc.next());

                int where = k - 1;
                if(nums[x].size() == 0 || where >= nums[x].size()){
                    System.out.println(-1);
                }
                else{
                    int res = nums[x].get(where);

                    System.out.println(res);
                }
            }
        }
    }

    private static void solution2(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            int Q = Integer.parseInt(sc.next());
            
            Integer[][] nums = new Integer[100][100];
            Integer[] numIter = new Integer[100];
            for(int i=0; i<N; ++i){
                int num = Integer.parseInt(sc.next());
                nums[num][numIter[num]++] = i+1;
            }

            for(int i=0; i<Q; ++i){
                int x = Integer.parseInt(sc.next());
                int k = Integer.parseInt(sc.next());

                int where = k - 1;
                int res = nums[x][where] > 0? nums[x][where]: -1;

                System.out.println(res);
            }
        }
    }

    private static void solution3(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            int Q = Integer.parseInt(sc.next());
            
            Map<Integer, List<Integer>> nums = new LinkedHashMap<>();
            for(int i=0; i<N; ++i){
                int num = Integer.parseInt(sc.next());
                if(!nums.containsKey(num)){
                    nums.put(num, new ArrayList<Integer>());
                }
                nums.get(num).add(i+1);
            }

            for(int i=0; i<Q; ++i){
                int x = Integer.parseInt(sc.next());
                int k = Integer.parseInt(sc.next());

                int res = -1;
                if(nums.containsKey(x)){
                    if(nums.get(x).size() > k-1){
                        res = nums.get(x).get(k-1);
                    }
                }

                System.out.println(res);
            }
        }
    }
}