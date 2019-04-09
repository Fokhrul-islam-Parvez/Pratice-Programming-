#include<stdio.h>
int main()
{
    int ar[20],arb[20],i,b=20;
    for(i=0;i<20;i++)
    {
        scanf("%d",&ar[i]);
        b=b-1;
        arb[b]=ar[i];
    }
    for(i=0;i<20;i++)
    printf(" N[%d] = %d\n",i,arb[i]);
    return 0;
}
