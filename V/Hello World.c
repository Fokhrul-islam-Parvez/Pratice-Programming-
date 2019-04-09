#include<stdio.h>
int main()
{
    int n,x=1,c=0;
    int t=1,i;
    while(x>0)
    {
         scanf("%d",&n);
         if(n<0)
            break;
         for(i=0;i<n;i++)
         {
             t=t*2;
             if(t>n)
             {
                 t=t/2;
                 break;
             }
             c++;
         }
         if(t<n)
            c++;
         printf("Case %d: %d\n",x,c);
         x++;
         t=1;
         c=0;
    }
}
