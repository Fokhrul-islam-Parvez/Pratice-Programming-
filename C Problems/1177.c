#include<stdio.h>
int main()
{
    int i;
   double n,ar[100],b;
   scanf("%lf",&n);
   b=n;
   for(i=0;i<100;i++)
   {
       ar[i]=n;
       n=n/2.0;
   }
   for(i=0;i<100;i++)
    printf("N[%d] = %.4lf\n",i,ar[i]);
   return 0;
}
