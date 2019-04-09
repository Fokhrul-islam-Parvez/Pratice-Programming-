#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int p[n][n];
   // int p1[n];
    for(i=0;i<n;i++)
    {
          for(j=0;j<n;j++)
            {
                p[i][j]=1;
            }
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
           p[i][j]=p[i-1][j]+p[i][j-1];
        }
    }
    printf("%d\n",p[n-1][n-1]);
}
