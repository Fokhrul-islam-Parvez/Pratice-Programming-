#include<stdio.h>
int main()
{
    int n,a=0,b=0,t0=0,lin,d;
    scanf("%d",&n);
    int p[n];
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    for(i=0;i<n;i++)
    {
        if(p[i]==1)
            a++;
        if(p[i]==0)
            break;
    }
     for(i=n;i>=0;i--)
     {
         if(p[i]==1)
            b++;
         if(p[i]==0)
            break;
     }


    for(i=a;i<n-b;i++)
    {
        if(p[i]==0)
        {
            c++;
           if(t0<c)
           {
               t0=c;
               lin=i;
           }
        }
        c=0;
    }
   int fin=lin-t0;
   c=0;
   d=0;
    for(i=fin-1;i>=a;i--)
    {
        if(p[i]==1)
            {
                c++;
            }
        else
           {
               d++;
           }
        if(d>c)
        {
            fin=fin-(c+d);
            d=0;
            c=0;
        }

       else
    }
}
