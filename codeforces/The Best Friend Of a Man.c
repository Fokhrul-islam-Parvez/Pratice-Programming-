#include<stdio.h>
int main()
{
    int n,k,i,a,tot=0;
    scanf("%d %d",&n,&k);
    int p[n];
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    for(i=0;i<n-1;i++)
    {
        if(p[i]+p[i+1]<k)
        {
            a=p[i]+p[i+1];
            tot=tot+(k-a);
            p[i+1]=p[i+1]+(k-a);
        }

    }
    printf("%d\n",tot);
    for(i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
}
