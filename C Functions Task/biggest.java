public class Main{
public static void doBiggest(int a,int b){
    int result;
    result=a>b?a:b;
    System.out.printf("%d\n",result);
}
public static void main(String[]args){
    doBiggest(40,56);
    doBiggest(32,34);
}
}