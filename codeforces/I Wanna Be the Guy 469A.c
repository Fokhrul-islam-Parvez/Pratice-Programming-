#include<stdio.h>
int main()
{
    int m,i,j,k,l;
    scanf("%d",&m);
    int p[m];
    int q[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&p[i]);
    }
    for(j=0;j<m;j++)
    {
        scanf("%d",&q[j]);

    }
    int a=i+j;
    int pq[a];
    for(k=0;k<i;k++)
    {
        pq[k]=p[k];

    }
     for(l=0;l<j;l++)
    {
        pq[k]=q[l];
        k++;
    }
   int big=pq[0];
   for(i=0;i<a;i++)
   {
       if(big<pq[i])
        big=pq[i];
   }
   if(big==m)
    printf("I become the guy.\n");
   else
    printf("Oh, my keyboard!\n");
   return 0;
}
