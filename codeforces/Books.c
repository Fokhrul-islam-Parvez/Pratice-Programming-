#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    int a[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0,d=0,k=0,b=0;
   for(i=0;i<n;i++)
   {
      c=c+a[i];
         d++;
      if(c>t)
      {
         i=b;
         b++;
         c=0;
         d=0;
      }
      if(k<d)
        k=d;

   }
   printf("%d\n",k);
}
