public class Main {
    public static void main(String[] args){
        Printable pr = () -> { System.out.println("this is printable!!!"); };
        pr.print();
    }
}

interface Printable {
    void print();
}