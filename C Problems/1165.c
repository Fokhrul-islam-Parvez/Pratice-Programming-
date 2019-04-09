#include<stdio.h>
int main()
{
    int t,a=0,i;
    int n,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
    for(j=2;j<n;j++)
        {
               if(n%j==0)
                {
                     a=1;
                    break;
                }
        }
            if(a==1)
                printf("%d nao eh primo\n",n);
            else
               printf("%d eh primo\n",n);
            a=0;
       }
    return 0;
}
