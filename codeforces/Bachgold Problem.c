#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n%2==0)
    {
       printf("%d\n",n/2);
       for(i=1;i<=n/2;i++)
            printf("2 ");
       printf("\n");
    }
    else
    {
        int a=n/2;
        printf("%d\n",a);
       for(i=1;i<=a-1;i++)
            printf("2 ");
         printf("3");
       printf("\n");
    }
    return 0;
}
