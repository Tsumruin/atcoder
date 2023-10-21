import java.util.*;
import java.util.stream.Collectors;

public class Main {
    public static void main(String[] args) {
        ans();
    }

    private static void ans(){
        try (Scanner scanner = new Scanner(System.in)) {

            int n = scanner.nextInt();
            long[][] objs = new long[n][];
            for (int i=0;i<n;i++) {
                long t = scanner.nextLong();
                long d = scanner.nextLong();
                objs[i] = new long[]{t, t+d};
            }

            Arrays.sort(objs, Comparator.comparingLong(i -> i[0]));

            // 追加キュー
            PriorityQueue<long[]> queue0 = new PriorityQueue<>(Comparator.comparingLong(i -> i[0]));
            // 削除キュー
            PriorityQueue<long[]> queue1 = new PriorityQueue<>(Comparator.comparingLong(i -> i[1]));
            var list = Arrays.asList(objs);
            queue0.addAll(list);

            int count=0;
            long time = 0;
            while (!(queue0.isEmpty() && queue1.isEmpty())) {
                if (queue1.isEmpty())
                    time = queue0.peek()[0];
                while (!queue0.isEmpty() && queue0.peek()[0] <= time)
                    queue1.add(queue0.poll());

                /*
                System.out.printf("%s, %s, %s%n", time,
                        queue0.stream().map(Arrays::toString).collect(Collectors.joining(", ", "[", "]")),
                        queue1.stream().map(Arrays::toString).collect(Collectors.joining(", ", "[", "]")));
                //*/
                if (!queue1.isEmpty()) {
                    queue1.poll();
                    count++;
                }
                while (!queue1.isEmpty() && queue1.peek()[1] <= time)
                    queue1.poll();
                time++;
            }

            System.out.println(count);

        }
    }

    private static void soluton(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());

            long[] T = new long[N];
            long[] D = new long[N];

            long DMax = 0;
            for(int i=0; i<N; ++i){
                T[i] = Long.parseLong(sc.next());
                D[i] = Long.parseLong(sc.next());
                DMax = Math.max(DMax, T[i]+D[i]);
            }


            int[] done = new int[N];
            long t = 1;
            long count = 0;
            while(t <= DMax){

                // System.out.println("t: " + t);

                long min = Long.MAX_VALUE;
                int id = -1;
                for(int i=0; i<N; ++i){
                    if(0 == done[i] && T[i] <= t && t <= T[i] + D[i]){
                        // System.out.println("candidate: " + i);
                        if(min > T[i] + D[i] - t){
                            min = T[i] + D[i] - t;
                            id = i;
                            // System.out.println(id);
                        }
                    }
                }

                if(id >= 0){
                    done[id] = 1;
                    count++;
                    // System.out.println("id: " + id);
                }
                t++;
                // System.out.println("===");
            }

            System.out.println(count);
        }
    }


}