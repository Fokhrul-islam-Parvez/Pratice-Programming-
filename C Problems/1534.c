#include<stdio.h>
int main()
{
    int n,i,j,a=1;
    while(scanf("%d",&n)!=EOF)
    {
      int ar[n][n];
      for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
    ar[i][j]=3;
    if(i==j)
    ar[i][j]=1;
    if(j==(n-a))
    {
    a++;
    ar[i][j]=2;
    }
    }
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    printf("%d",ar[i][j]);
    printf("\n");
    }
    a=1;
    }
return 0;
}
