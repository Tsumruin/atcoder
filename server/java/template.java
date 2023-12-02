import java.util.*;

class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            
            int[] A = new int[N];
            for(int i=0; i<N; ++i){
                A[i] = Integer.parseInt(sc.next());
            }
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