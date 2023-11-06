import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            long a = Long.parseLong(sc.next());
            long b = Long.parseLong(sc.next());
            long n = Long.parseLong(sc.next());
            
            GenericSample<Integer> inte = new GenericSample(10);
            

        }
    }
}

class GenericSample<T>{
    private T value;

    public GenericSample(T val){
        this.value = val;
    }

    public T getValue(){
        return value;
    }
}