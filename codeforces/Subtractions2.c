#include<stdio.h>
#include <math.h>
int main()
{  int n,t=0,t1;
    scanf("%d",&n);
    int a,b,a1,a2;
    while(n>0)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        a1=a;
        else
            a1=b;
        if(a<b)
        a2=a;
        else
            a2=b;
        while(a2>0)
        {
            t=t+a1/a2;
            t1=a1%a2;
            a1=a2;
            a2=t1;
        }
       printf("%d\n",t);
        n--;
        t=0;
    }
}

