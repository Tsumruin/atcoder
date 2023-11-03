
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Customer cust;
        cust = new Customer();
        cust.setData("John", 24);

        String nm = cust.getName();
        System.out.println(nm + ", hello.");
        System.out.println(cust.display());
    }

}

