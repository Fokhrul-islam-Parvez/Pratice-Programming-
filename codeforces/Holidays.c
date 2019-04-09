#include<stdio.h>
int main()
{
    int n,a,m,b,mi,mx;
    scanf("%d",&n);
    a=n/7;
    m=a*2;
    b=n%7;
    if(b==0)
    {
        mi=m;
        mx=m;
    }
    else if(b==1)
    {
        mi=m;
        mx=m+1;
    }
    else if(1<b && b<6)
    {
        mi=m;
        mx=m+2;
    }
    else if(b==6)
    {
        mi=m+1;
        mx=m+2;
    }
    if(a==0)
    {
        if(n>1 && n<=5)
        {
            mi=0;
            mx=2;
        }
     else if(n==6)
        {
            mi=1;
            mx=2;
        }
      else
      {
          mi=0;
          mx=1;
      }
    }
    printf("%d %d\n",mi,mx);
}
