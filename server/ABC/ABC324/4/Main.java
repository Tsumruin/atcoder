import java.util.*;

public class Main {
    public static void main(String[] args) {
        soluton();
    }

    private static void soluton(){
        try (Scanner sc = new Scanner(System.in)) {
            int N = Integer.parseInt(sc.next());
            int S = Integer.parseInt(sc.next());

            List<Integer> nums = new ArrayList<>();
            int tenpNumber = S;
            while (tenpNumber != 0) {
                int digit = tenpNumber % 10;
                tenpNumber /= 10;
                nums.add(digit);
            }

            Collections.sort(nums);
            // for(int num: nums){
            //     System.out.println(num);
            // }

            for()

        }
    }
}