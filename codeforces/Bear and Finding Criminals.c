#include<stdio.h>
int main()
{
    int n,d,i,c=0;
    scanf("%d %d",&n,&d);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        if(a[d-1]==1)
            c++;
    for(i=1;;i++)
    {
        if((d-i)>0&& (d+i)<=n)
        if(a[d-1-i]==1 && a[d-1+i]==1)
            c=c+2;
        if(d-i<=0&&d+i<=n)
            if(a[d-1+i]==1)
              c++;
        if(d-i>0&&d+i>n)
            if(a[d-1-i]==1)
              c++;
        if(d-i<=0&&d+i>n)
            break;
    }
    printf("%d\n",c);
}
