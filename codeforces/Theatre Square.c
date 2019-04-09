#include<stdio.h>
int main()
{
    int n1,n2,p,a,a1,b,b1,t,t1,m;
    scanf("%d %d %d",&n1,&n2,&p);
    a=n1/p;
    a1=n1%p;
    b=n2/p;
    b1=n2%p;
    if(a1!=0)
        t=a+1;
    else
        t=a;
    if(b1!=0)
        t1=(b-1+1)*t;
    else

        t1=(b-1)*t;
    m=t+t1;
    printf("%d\n",m);
    return 0;
}
