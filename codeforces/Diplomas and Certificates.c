#include<stdio.h>
int main()
{
    unsigned long long c,a,k,d,g,f;
    scanf("%lld %lld",&a,&k);
    c= 1;
    while(1)
    {
        g=c;
        f=k*c;
        d=g+f;
        if(d>a/2)
        {
           g=g-1;
           f=f-k;
           d=g+f;
          printf("%lld %lld %lld",g,f,(a-d));
          break;
        }
        c++;
    }
    return 0;
}
