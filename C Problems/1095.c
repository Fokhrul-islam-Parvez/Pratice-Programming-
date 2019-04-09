#include<stdio.h>
int main()
{
    int b,b1;
    for(b=0;b<1;b++)
    {
    for(b1=1;b1<=3;b1++)
    printf("I=%d J=%d\n",b,b1);
    }
    float i,a=0.2,j;
    for(i=0.2;i<1;i=i+0.2)
    {
    for(j=1;j<=3;j++)
    printf("I=%.1f J=%.1f\n",i,j+a);
    a=a+0.2;
    }
    for(b=1;b<2;b++)
    {
    for(b1=2;b1<=4;b1++)
    printf("I=%d J=%d\n",b,b1);
    }
     a=0.2;
    for(i=1.2;i<2;i=i+0.2)
    {
    for(j=2;j<=4;j++)
    printf("I=%.1f J=%.1f\n",i,j+a);
    a=a+0.2;
    }
    for(b=2;b<3;b++)
    {
    for(b1=3;b1<=5;b1++)
    printf("I=%d J=%d\n",b,b1);
    }
    return 0;
}
