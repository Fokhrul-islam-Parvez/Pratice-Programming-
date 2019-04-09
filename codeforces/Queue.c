#include<stdio.h>
int main()
{
    int n,i,j,c,d=0;
    scanf("%d",&n);
    int b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(b[j]>b[j+1])
            {
                c=b[j];
                b[j]=b[j+1];
                b[j+1]=c;
            }
        }
    }
    for(i=1;i<n;i++)
    {
        c=0;
        for(j=0;j<n-i;j++)
        {
            c=c+b[j];
        }
        if(c>b[j])
            d++;
    }
    printf("%d\n",(n-d));
}
