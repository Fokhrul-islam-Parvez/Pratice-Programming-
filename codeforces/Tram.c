#include<stdio.h>
int main()
{
    int n,i,j,k,l=0,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&j,&k);
        l=l-j+k;
        if(l>m)
            m=l;

    }
    printf("%d\n",m);
}
