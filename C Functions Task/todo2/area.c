#include <stdio.h>
void getArea( float radius)
{
  const float PI=3.14;
  float result;
  result=PI*(radius*radius);
  printf("%f\n",result);
}
int main()
{
    getArea(2);
    getArea(4);
    return 0;
}