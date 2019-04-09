#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    long long a,b,c,d,e=0,f,g,h,min;
    a=n/m;
    b=a*m;
    c=n-b;
    d=m-c;
    int i;
   e=(a*(a-1))/2;
    f=e*d;
   g=((a+1)*(a))/2;
    h=g*c;
    min=f+h;
    printf("%I64d ",min);
    a=n-(m-1);
   e=(a*(a-1))/2;
    printf("%I64d\n",e);
    return 0;
}
