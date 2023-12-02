public class Main {
    public static void main(String[] args){
        Printable pr = () -> { System.out.println("this is printable!!!"); };
        pr.print();

        Calc c = (x, y) -> {return x * y;};
        System.out.println(c.calc(23, 21));
    }
}

interface Printable {
    void print();
}

interface Calc {
    int calc(int x, int y);
}