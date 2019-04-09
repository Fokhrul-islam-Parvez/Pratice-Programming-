#include<stdio.h>
int main()
{
    int n,i,j,a=1,a1,a2,b,c;
    while(scanf("%d",&n)!=0)
    {
        int ar[n][n];

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {




                a2=n/3;
                if(i==a2 && j==a2)
                {
                    for(b=a2;b<n-a2;b++)
                    {
                        for(c=a2;c<n-a2;c++)
                            ar[b][c]=1;
                    }
                   goto paru;
                }


            if(i==j)
                    ar[i][j]=2;

                      else{

                            if(j==n-a)
                                {
                                  a++;
                                  ar[i][j]=3;
                                }
                            else
                               ar[i][j]=0;

                         }
               }
            }
         paru:
         a1=n/2;
        ar[a1][a1]=4;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                printf("%d",ar[i][j]);
            printf("\n");
        }
    }

}
