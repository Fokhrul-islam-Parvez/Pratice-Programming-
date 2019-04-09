#include<stdio.h>
int main()
{
    int n,i,j,a=1,a1,a2,b,c;
    while(scanf("%d",&n)!=EOF)
    {
        int ar[n][n];

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                ar[i][j]=0;
                 if(i==j)
                    ar[i][j]=2;
                 if(j==n-a)
                    {
                      a++;
                      ar[i][j]=3;
                    }
                a1=n/2;
                if(i==a1&&j==a2)
                 ar[a1][a1]=4;

            }
        }
        a2=n/3;
        for(b=a2;b<n-a2;b++)
            {
              for(c=a2;c<n-a2;c++)
                ar[b][c]=1;
            }
        a1=n/2;
        ar[a1][a1]=4;
         for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                printf("%d",ar[i][j]);
            printf("\n");
        }
        a=1;
        printf("\n");

    }
    return 0;
}
