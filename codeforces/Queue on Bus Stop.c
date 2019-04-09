#include<stdio.h>
int main()
{
    int n,m,i,c=0;
    scanf("%d %d",&n,&m);
    int a[n],t=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++)
   {
       t=t+a[i];
       if(t>=m)
       {
           if(t>m)
            i--;
           t=0;
           c++;
       }

   }
   if(t<m && 0<t)
    c++;
   printf("%d\n",c);
}
