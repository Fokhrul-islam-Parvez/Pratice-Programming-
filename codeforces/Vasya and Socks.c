#include<stdio.h>
int main()
{
    int m,n,k,i=1,a,b,c,d=0;
    scanf("%d %d",&m,&n);
    k=m;
    while(i==1)
    {
        a=m/n;
        b=m+a;
        c=b-(n*a);
        m=c;
        if(a==0)
            break;
        d=d+a;

    }
    printf("%d\n",(d+k));
}
