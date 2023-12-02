import java.io.FileWriter;
import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            int M = Integer.parseInt(sc.next());
            
            Set<Integer> setA = new HashSet<>();
            for(int i=0; i<N; ++i){
                int tmpA = Integer.parseInt(sc.next());
                setA.add(tmpA);
            }
            List<Integer> listA = new ArrayList<>(setA);
            Collections.sort(listA);

            Set<Integer> setB = new HashSet<>();
            for(int i=0; i<M; ++i){
                int tmpB = Integer.parseInt(sc.next());
                setB.add(tmpB);
            }
            List<Integer> listB = new ArrayList<>(setB);
            Collections.sort(listB);

            int res = Integer.MAX_VALUE;

            int iterB = 0;
            for(int numA: listA){
                while(iterB < listB.size()){
                    int numB = listB.get(iterB);

                    // System.out.println(numA + " vs " + numB);

                    int dif = Math.abs(numA - numB);
                    res = Math.min(res, dif);

                    // System.out.println("res: " + res);

                    if(0 == res){
                        System.out.println(res);
                        return ;
                    }

                    if(numA < numB){
                        break;
                    }

                    iterB++;
                }
            }

            System.out.println(res);
        }
    }
}

class TestCaseFileGenerator {
    public static void main(String[] args) {
        generateTestCaseFile("data.txt");
    }

    private static void generateTestCaseFile(String filename) {
        Random random = new Random();

        try(Scanner sc = new Scanner(System.in)){
            int N = Integer.parseInt(sc.next()); // 例として N = 10 とします
            int M = Integer.parseInt(sc.next()); // 例として M = 8 とします

            try (FileWriter writer = new FileWriter(filename)) {
                writer.write(N + " " + M + "\n");

                List<Integer> listA = generateRandomNumbers(N, random);
                writer.write(listToString(listA) + "\n");

                List<Integer> listB = generateRandomNumbers(M, random);
                writer.write(listToString(listB) + "\n");

            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }

    private static List<Integer> generateRandomNumbers(int size, Random random) {
        List<Integer> numbers = new ArrayList<>();
        for (int i = 0; i < size; i++) {
            numbers.add(random.nextInt(1000));
        }
        return numbers;
    }

    private static String listToString(List<Integer> list) {
        StringBuilder builder = new StringBuilder();
        for (Integer num : list) {
            builder.append(num).append(" ");
        }
        return builder.toString().trim();
    }
}