#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,f,g,h,i,k=0;
    scanf("%d %d %d %d",&n,&a,&b,&c);
    for(i=0;i<3;i++)
    {
        if(i==1)
        {
          a=b;
          b=a;
          c=c;
        }
        if(i==2)
        {
           a=c;
           b=a;
           c=b;
        }
        d=n/a;
        if(n%a!=0)
        {
              d=n/a;
            e=n%a;
            if((e+a)==b)
                d=d;
            else if(e%b==0)
                d=d+(e/b);
            else
            {
                f=e/b;
                g=e%b;
                if((g+b)==c)
                    d=d+f;
                else if(g%c==0)
                    d=f+(g/c);
                else
                    {
                        d=0;
                        f=0;
                    }
            }
            if(d==0 && f==0)
                {
                  d=n/a;
                   e=n%a;
            if((e+a)==c)
                d=d;
            else if(e%c==0)
                d=d+(e/c);
            else
            {
                f=e/c;
                g=e%c;
                if((g+c)==b)
                    d=d+f;
                else if(g%b==0)
                    d=f+(g/b);
                else
                    {
                        d=0;
                        f=0;
                    }
            }
                }

            }

    if(d>k)
        k=d;
  }
  printf("%d\n",k);
}
