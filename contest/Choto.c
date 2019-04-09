#include<stdio.h>
int main()
{
    int t,m=0;
    scanf("%d",&t);
    while(t>0)
    {
        int c=0,k=0,i,j;
        t--;
        int a,b;
        scanf("%d %d",&a,&b);
        for(i=a;i<=b;i++)
        {
            if(i==2)
            {
                k=1;
            }
            if(i>10)
                i==10;
            for(j=2;j<i;j++)
              {
                  if(i%j==0)
                    {
                        k=0;
                        break;
                    }
                 else
                    k=1;
                }
            if(k==1)
                c++;
        }
        m++;
        printf("Case %d: %d\n",m,c);
    }
}
