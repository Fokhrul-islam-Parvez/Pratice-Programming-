#include<stdio.h>
int main()
{
    int n,tot=0,sum=0,i,j,k,a1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

         for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]<a[j+1])

            {
                a1=a[j];
                a[j]=a[j+1];
                a[j+1]=a1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        tot=tot+a[i];
        for(j=i+1;j<n;j++)
        {
           // if(j==i)
            //    continue;
            sum=sum+a[j];
        }
        if(tot>sum)
            break;
        sum=0;
    }
    printf("%d",i+1);
    return 0;
}
