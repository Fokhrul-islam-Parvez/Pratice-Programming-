#include<stdio.h>
int main()
{
    int n,a,d;
    scanf("%d %d %d",&n,&a,&d);
    int b[n],i,j,k;
    int t=0,t1;
    for(i=0;i<n;i++)
        {scanf("%d",&b[i]);
         t=t+b[i];
        }
      int u=b[0];
      b[0]=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(b[j]<b[j+1])
            {
                k=b[j];
                b[j]=b[j+1];
                b[j+1]=k;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        t1=(a*u)/t;
        if(t1>=d)
        {
            printf("%d\n",i);
            break;
        }
        else
            t=t-b[i];

    }
}
