#include<stdio.h>
int main()
{
    int t,i,a1,a2,j,ta=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a1,&a2);
        if(a1<a2)
        {
           for(j=a1+1;j<a2;j++)
           {
               if(j%2!=0)
                ta=ta+j;
           }
           printf("%d\n",ta);
        }
        ta=0;
        if(a1>a2)
        {
           for(j=a1-1;j>a2;j--)
           {
               if(j%2!=0)
                ta=ta+j;
           }
           printf("%d\n",ta);
        }
        ta=0;
        if(a1==a2)
        printf("0\n");
    }
    return 0;
}
