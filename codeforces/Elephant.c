#include<stdio.h>
int main()
{
    int n,a,b=0,i;
    scanf("%d",&n);
    for(i=5;i>0;i--)
    {
        a=n/i;
        b=b+a;
        n=n-(i*a);
    }
    printf("%d\n",b);
    return 0;
}
