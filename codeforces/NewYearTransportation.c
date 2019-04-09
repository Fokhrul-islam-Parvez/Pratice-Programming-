#include<stdio.h>
int main()
{
    int n,m,i,d,c=1,k=0;
    scanf("%d %d",&n,&m);
    int a[n-1];
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,d=1;i<n && d<n;i++)
    {
         c=d+a[d];
        if(c==m)
        {
           printf("YES\n");
            k=1;
           break;
       }
        d=c;
    }
    if(k==0)
        printf("NO\n");
        return 0;
}
