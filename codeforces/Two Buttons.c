#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,a,b,k,c,x=1,i;
    scanf("%d %d",&n,&m);
    if(n>m)
    {
        a=n-m;
        printf("%d\n",a);
    }
    else
    {
        a=n;
        c=0;
        while(x==1)
        {
            a=a*2;
            c++;
            k=c;
            if(a>m)
            {
                for(i=1;;i++)
                {
                    b=a-(i*pow(2,k));
                    if(b<m)
                    {
                       b=a-((i-1)*pow(2,k));
                       break;
                    }
                    c++;
                }
               int p=(b-m);
               if(p<0)
                  p=p*(-1);
                    if(p>0 && p%2==0)
                        p=(p/2)-1;
                c=c+p;
                break;
            }
            if(a==m)
                break;

        }
    printf("%d\n",c);
  }
    return 0;
}
