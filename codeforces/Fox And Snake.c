#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int i,j,k=0,l=0;
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=m;i++)
        {
            if(j%2!=0)
                printf("#");
            else
            {
                if(i==m && k==0){
                    printf("#");
                    k=1;}
                else if(k==0)
                    printf(".");

                else if(i==1 && k==1){
                    printf("#");
                    }
                else{
                    printf(".");
                    if(i==m)
                        k=0;
                }

            }

        }
         printf("\n");

    }
    return 0;
}

