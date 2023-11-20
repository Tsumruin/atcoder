import java.util.*;

public class Main {
    public static void main(String[] args) {
        solution();
    }

    private static void solution(){
        try (Scanner sc = new Scanner(System.in)) {
            List<Point> points = new ArrayList<>();
            
            for(int i=0; i<4; ++i){
                int x = Integer.parseInt(sc.next());
                int y = Integer.parseInt(sc.next());
                Point point = new Point(x, y);
                points.add(point);
            }


            for(Point target: points){
                // System.out.println("target:" + target);
                int[] check = new int[3];
                int iter = 0;
                for(int i=0; i<4; ++i){
                    Point point1 = points.get(i);
                    for(int k=i; k<i+4; ++k){
                        Point point2 = points.get((k%4));
                        if(!target.equals(point1) && !target.equals(point2) && !point1.equals(point2)){

                            int difX = point1.getX() - target.getX();
                            int difY = point1.getY() - target.getY();
                            Point dif1 = new Point(difX, difY);

                            // System.out.println("point1:" + point1);

                            difX = point2.getX() - target.getX();
                            difY = point2.getY() - target.getY();
                            Point dif2 = new Point(difX, difY);

                            
                            // System.out.println("point2" + point2);

                            check[iter++] = outProduct(dif1, dif2);

                            break;
                        }
                        
                    }
                }

                // for(int i=0; i<3; ++i){
                //     System.out.println(check[i]);
                // }

                if((check[0] > 0 && check[1] > 0 && check[2] > 0) || (check[0] < 0 && check[1] < 0 && check[2] < 0)){
                    System.out.println("No");
                    return;
                }
            }

            System.out.println("Yes");

        }
    }

    private static int outProduct(Point p1, Point p2){
        int p1X = p1.getX();
        int p1Y = p1.getY();
        int p2X = p2.getX();
        int p2Y = p2.getY();

        return p1X * p2Y - p1Y * p2X;
    }

    private static boolean isPlus(int num){
        return num > 0 ? true: false;
    }
}

class Point {
    private int x;
    private int y;

    public Point(int x, int y){
        this.x = x;
        this.y = y;
    }

    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    @Override
    public String toString(){
        return "(" + x + ", " + y + ")";
    }
}
