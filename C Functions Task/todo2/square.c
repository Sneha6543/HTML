#include <stdio.h>
void getSq(int a,int b)
{
  int result;
  result=(a*a)+(b*b)+(2*(a*b));
  printf("%d\n",result);
}
int main()
{
    getSq(5,4);
    getSq(6,8);
    return 0;
}