#include <stdio.h>
void getBiggest(int a,int b)
{
  int result;
  result= a>b?a:b;
  printf("%d\n",result);
}
int main()
{
    getBiggest(256,38);
    getBiggest(30,34);
    return 0;
}