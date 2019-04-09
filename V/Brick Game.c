#include<stdio.h>
int main()
{
    int t,x=0,n=0;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        x++;
        int i=0,b=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        b=n/2;
        printf("Case %d: %d\n",x,a[b]);
    }
}
