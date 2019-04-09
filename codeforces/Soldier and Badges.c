#include<stdio.h>
int main()
{
    int n,i,j,c,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
     for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
    c=0;
     for(i=0;i<n-1;i++)
     {
         if(a[i]>=a[i+1])
         {
            k=(a[i]-a[i+1])+1;
            if(k<0)
                k=-1*k;
            a[i+1]=a[i+1]+k;
             c=c+k;
         }
     }
    printf("%d\n",c);
}
