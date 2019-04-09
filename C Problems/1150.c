#include<stdio.h>
int main()
{
    int a,b,t=0,c=0,i;
    scanf("%d %d",&a,&b);
    paru:
    if(a>=b)
        scanf("%d",&b);
    if(a>=b)
        goto paru;
    for(i=a;i<=b;i++)
    {
         c=c+1;
        t=t+i;
        if(t>b)
            break;
    }
    printf("%d\n",c);
}
