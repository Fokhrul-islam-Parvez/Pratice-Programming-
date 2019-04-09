#include<stdio.h>
#include <math.h>
int main()
{
    int t,x=0,f=0;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        x++;
        int a,b;
        scanf("%d %d",&a,&b);
          if(a!=1)
            {a--;
        f=pow((((a-1)/2)+1),2);}
        int k=(((b-1)/2)+1);
         double dk=(double)k;
          printf("dk==%f\n",dk);
        int s=pow(dk,2);
        printf("s==%d\n",s);
         printf("f==%d\n",f);
        printf("Case %d: %d\n",x,(s-f));
        f=0;
    }
}
