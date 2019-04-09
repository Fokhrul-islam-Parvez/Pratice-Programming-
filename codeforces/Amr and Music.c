#include<stdio.h>
int main()
{
    int n,k,i,j,d=0,c;
    scanf("%d %d",&n,&k);
    int a[n];
    int b[n];
    int e[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
        e[i]=0;
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
    c=0;
     for(i=0;i<n;i++)
     {
         c=c+b[i];
         e[i]=b[i];
         d++;
         if(c>k)
         {
            d--;
            break;
         }
     }
     printf("%d\n",d);
     for(i=0;i<d;i++)
     {
         for(j=0;j<n;j++)
         {
             if(e[i]==a[j])
             {
                 b[i]=(j+1);
                 a[j]=0;
                 break;
             }
         }
     }
      for(i=0;i<d;i++)
     {
         if(i==d-1)
             printf("%d\n",b[i]);
         else
             printf("%d ",b[i]);
     }
}
