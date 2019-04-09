#include<stdio.h>
#include<math.h>
int main()
{
    int b,i,j,k,a,d,e;

    while(b=1)
    {
        scanf("%d %d %d",&i,&j,&k);
        if(i==0 || j==0 || k==0)
            break;
        a=i*j;
        d=(a*100)/k;
        e=sqrt(d);
        printf("%d\n",e);
    }
    return 0;
}
