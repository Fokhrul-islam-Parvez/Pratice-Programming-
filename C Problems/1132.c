#include<stdio.h>
int main()
{
    int i,t=0,a,b;
    scanf("%d %d",&a,&b);
    if(a<b)
    {
    for(i=a;i<=b;i++)
    {
        if(i%13!=0)
            t=t+i;
    }
    printf("%d\n",t);
    }
    if(a>b)
    {
    for(i=a;i>=b;i--)
    {
        if(i%13!=0)
            t=t+i;
    }
    printf("%d\n",t);
    }

    return 0;
}
