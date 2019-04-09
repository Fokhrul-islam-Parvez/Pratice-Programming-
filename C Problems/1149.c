#include<stdio.h>
int main()
{
    int a,n,t=0,i;
    scanf("%d %d",&a,&n);
        paru:
    if(n<=0)
    scanf("%d",&n);
    if(n<=0)
    goto paru;
    if(a>=n)
    {
    for(i=n;i<=a;i++)
        t=t+i;
    printf("%d\n",t+n);
    }
    if(a<n)
    {
    for(i=a;i<=n;i++)
        t=t+i;
    printf("%d\n",t+a);
    }
    return 0;
}
