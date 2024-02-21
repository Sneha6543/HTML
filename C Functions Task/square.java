public class Main{
public static void doSquare(int a,int b)
{
  int result;
  result=(a*a)+(b*b)+(2*(a*b));
  System.out.printf("%d\n",result);
}
public static void main(String[]args)
{
  doSquare(3,5);
  doSquare(2,4);
}
}