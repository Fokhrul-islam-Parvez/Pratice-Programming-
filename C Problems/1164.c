#include<stdio.h>
int main()
{
    int t,j,i;
    int n,a=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            a=a+j;
            if(a==n)
            {
                printf("%d eh perfeito\n",n);
                break;
            }
            if(a>n)
            {
                printf("%d nao eh perfeito\n",n);
                break;
            }
        }
        a=0;
    }
 return 0;
}
