#include<stdio.h>
void doAdd(int n1,int n2)
{
  int result;
  result=n1+n2;
  printf("%d\n",result);
}
int main()
{
  doAdd(10,20);
  doAdd(56,56);
  return 0;
}