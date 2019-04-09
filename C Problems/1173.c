#include<stdio.h>
int main()
{
    int n,i,ar[10];
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        ar[i]=n;
        n=n*2;
    }
    for(i=0;i<10;i++)
        printf("N[%d] = %d\n",i,ar[i]);
    return 0;
}
