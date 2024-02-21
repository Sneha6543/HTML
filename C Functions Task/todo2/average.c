#include <stdio.h>
void getAvg(int a,int b,int c)
{
  int result;
  result=(a+b+c)/3;
  printf("%d\n",result);
}
int main()
{
    getAvg(2,3,4);
    getAvg(6,8,10);
    return 0;
}