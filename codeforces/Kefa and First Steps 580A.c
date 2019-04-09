#include<stdio.h>
int main()
{
    int n,k=1,p=0,i,m;
    scanf("%d",&n);
    int a[n],a2[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n-1;i++)
    {
     if(a[i]<=a[i+1])
        {
            k++;
                a2[p]=k;
               m=0;
        }
    else{
           a2[p]=k;
            p++;
            k=1;
            m=1;
        }
    }
     if(m==0)
        p++;
     if(n==1)
            a2[0]=1;
   int big=a2[0];
    for(i=0;i<p;i++)
    {
        if(big<a2[i])
            big=a2[i];
    }
    printf("%d\n",big);
}
