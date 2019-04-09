#include<stdio.h>
int main()
{
    int n,m,t=0,t2=0,a=0,b=0,t3=0;
    long long k=0;
    scanf("%d %d %I64d",&n,&m,&k);
    if(k==0)
    {
        printf("1 1\n");
        return;
    }
    if(n>k)
    {
        printf("%I64d 1\n",(k+1));
        return;
    }
    if(n==k)
    {
        printf("%d 2\n",n);
        return;
    }
    k=k-n;
    if((m-2)==0)
        {
             printf("%I64d 2\n",(n-k));
             return;
        }
    else
    t=k/(m-2);
    if((m-2)==1)
        t=t/2;
    t2=(t*(m-2))+(t-1);
    if(t2<k)
       {
           a=n-t;
       }
    else
    {
        a=n-(t-1);
        t--;
    }
    if(t2<k)
    {
        t3=k-t2-1;
         if(t%2==0)
        b=2+t3;
        else
            b=m-t3;
    }
    else
    {
        t3=t2-k;
        if(t%2==0)
        b=m-t3;
        else
            b=2+t3;
    }
    printf("%d %d\n",a,b);
}
