#include<stdio.h>
int main()
{
    int a,b,a1,a2,i,j;
    scanf("%d %d",&a,&b);
    if(a>=0){
    a1=a/b;
    a2=a%b;
    printf("%d %d\n",a1,a2);
    }
    if(a<0&& b>0)
    {
        for(i=-1;i>=a;i--)
        {
            for(j=0;j<b;j++)
                if(a==(b*i)+j)
                {
                printf("%d %d\n",i,j);
                return 0;
                }
        }
    }
    if(a<0&& b<0)
    {
        for(i=1;i>=a;i++)
        {
            for(j=0;j>b;j++)
                if(a==(b*i)+j)
                {
                printf("%d %d\n",i,j);
                return 0;
                }
        }
    }
    return 0;
}
