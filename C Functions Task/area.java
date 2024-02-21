public class Main{
public static void doArea(int radius){
        double Pi=3.14;
        double result;
        result=Pi*(radius*radius);
        System.out.println(result);
}
public static void main(String[] args){
        doArea(4);
        doArea(3);
}
}