#include<stdio.h>
int main ()
{
    long m,n,w;
    scanf("%ld %ld %ld",&n,&m,&w);
    long a,b,c,d,e;
    a=m/w;
    b=m%w;
    if(b!=0)
        a++;
    c=n/w;
    d=n%w;
    if(d!=0)
        c++;
    e=a*c;
    printf("%ld",e);
}
