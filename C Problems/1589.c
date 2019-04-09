#include<stdio.h>
int main()
{
     int i,a,b,c,t;
     scanf("%d",&t);
     for(i=0;i<t;i++)
     {
         scanf("%d %d",&a,&b);
         c=a+b;
         printf("%d\n",c);
     }
     return 0;
}
