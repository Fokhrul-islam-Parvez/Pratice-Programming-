#include<stdio.h>
int main()
{
    int i,a,t=0;
    float av,b=0;
    while(i=1)
    {
        scanf("%d",&a);
        if(a<0)
            break;
        b++;
        t=t+a;
    }
    printf("b=%d\nt=%f\n",t,b);
    av=t/b;
    printf("%.2f",av);
    return 0;
}
