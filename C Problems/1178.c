#include<stdio.h>
int main()
{
int a=1,i,j;
while(a!=0)
{
    scanf("%d",&a);
    int ar[a][a];
    int b,c=2,n=1;
         for(i=0;i<a;i++)
         {
              for(j=0;j<a;j++)
                 {
                   if(i==j)
                   {
                       b=1;
                       ar[i][j]=b;
                   }
                   if(i<j)
                   {
                       b++;
                       ar[i][j]=b;
                   }
                   if(i>j)
                   {
                       c--;
                       ar[i][j]=c;
                   }

                 }
                 c=c+n;
                 n++;
          }
    for(i=0;i<a;i++)
    {
        printf("   ");
        for(j=0;j<a;j++)
        {
            if(j<a-1)
            printf("%d ",ar[i][j]);
            if(j==a-1)
            printf("%d",ar[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
return 0;
}
