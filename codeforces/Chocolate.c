#include<stdio.h>
int main()
{
    int n,a1=0,k=0,i,d=0;
    long long int64_t, c=0,t=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1 && k==0)
        {
           a1=1;
           t=t*(++c);
           c=0;
           k=1;
        }
        else if(a1==1 && a[i]==0)
        {
            c++;
            k=0;
        }
        if(a[i]==1)
            d=1;
    }
    if(t<=1)
        t=d;
   printf("%I64d\n",t);
}
