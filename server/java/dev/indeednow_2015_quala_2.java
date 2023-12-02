import java.io.FileWriter;
import java.io.IOException;
import java.util.HashMap;
import java.util.Map;
import java.util.Random;
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution() {
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());

            String indeedNow = "indeednow";
            Map<String, Integer> indeedMap = new HashMap<>();
            for (int i = 0; i < indeedNow.length(); ++i) {
                String indeedNowIter = indeedNow.substring(i, i + 1);
                if (!indeedMap.containsKey(indeedNowIter)) {
                    indeedMap.put(indeedNowIter, 1);
                } else {
                    int currentNum = indeedMap.get(indeedNowIter);
                    indeedMap.replace(indeedNowIter, currentNum + 1);
                }
            }

            for (int i = 0; i < N; ++i) {
                String target = sc.next();
                Map<String, Integer> map = putValueInMap(target);

                String res = indeedMap.equals(map) ? "YES" : "NO";
                System.out.println(res);
            }
        }
    }

    private static Map<String, Integer> putValueInMap(String target) {
        Map<String, Integer> map = new HashMap<>();
        for (int i = 0; i < target.length(); ++i) {
            String targetIter = target.substring(i, i + 1);
            if (!map.containsKey(targetIter)) {
                map.put(targetIter, 1);
            } else {
                int currentNum = map.get(targetIter);
                map.replace(targetIter, currentNum + 1);
            }
        }
        return map;
    }
}

class RandomStringFileGenerator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get the count of generations (N) from the user
        System.out.print("Enter the count of generations (N): ");
        int N = scanner.nextInt();

        // Specify other parameters
        String targetSubstring = "indeednow";
        String fileName = "randomString.txt";

        try {
            FileWriter writer = new FileWriter(fileName);

            writer.write(Integer.toString(N) + "\n");

            // Generate and write N random strings
            for (int i = 0; i < N; i++) {
                String randomString = generateRandomString(targetSubstring);
                writer.write(randomString + "\n");
            }

            writer.close();
            System.out.println("File '" + fileName + "' created successfully with " + N + " random strings.");
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            // Close the scanner to prevent resource leak
            scanner.close();
        }
    }

    public static String generateRandomString(String targetSubstring) {
        Random random = new Random();
        int targetLength = targetSubstring.length();

        StringBuilder stringBuilder = new StringBuilder();

        // Ensure that the generated string contains the shuffled substring "indeednow"
        int index = random.nextInt(101 - targetLength); // Random index within the available space
        stringBuilder.append(generateRandomSubstring(index, targetSubstring));

        return stringBuilder.toString();
    }

    public static String generateRandomSubstring(int index, String targetSubstring) {
        char[] shuffledChars = targetSubstring.toCharArray();
        for (int i = shuffledChars.length - 1; i > 0; i--) {
            int j = new Random().nextInt(i + 1);
            // Swap characters
            char temp = shuffledChars[i];
            shuffledChars[i] = shuffledChars[j];
            shuffledChars[j] = temp;
        }
        return new String(shuffledChars);
    }
}