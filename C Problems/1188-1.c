#include<stdio.h>
int main()
{
    int i,j,a=1,b=11,t=0;
    float ar[12][12],sum=0,av;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
            scanf("%f",&ar[i][j]);
    }
    for(i=0;i<5;i++)
    {
        for(j=a;j<b;j++){
           sum=sum+ar[i][j];
           t=t+1;
        }
        a=a+1;
        b=b-1;
    }
    av=sum/t;
    printf("%.1f\n",av);
    return 0;
}
