public class Customer {
    private String name;
    private int age;

    public void setData(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String display() {
        return name + " is " + age + " years old.";
    } 

    public String getName() {
        return name;
    }
}