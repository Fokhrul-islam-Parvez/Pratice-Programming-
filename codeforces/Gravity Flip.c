#include<stdio.h>
int main()
{
    int n,i,j,d;
    scanf("%d",&n);
    int c[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(c[j]>c[j+1])
            {
                d=c[j];
                c[j]=c[j+1];
                c[j+1]=d;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
