#include<stdio.h>
int main()
{
    const float PI=3.14;
    float radius,result;
    radius=100;
    result=PI*(radius*radius);
    printf("%f\n",result);
    radius=45;
    result=PI*(radius*radius);
    printf("%f\n",result);
    radius=10;
    result=PI*(radius*radius);
    printf("%f\n",result);
    return 0;
}