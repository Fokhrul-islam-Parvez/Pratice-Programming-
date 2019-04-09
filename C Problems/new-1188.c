#include<stdio.h>
int main()
{
    int i,j,t=0;
    float ar[2][12],sum=0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<12;j++)
            scanf("%f",&ar[i][j]);
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<12;j++)
            sum=sum+ar[i][j];
        printf("%f---",sum);
    }
}
