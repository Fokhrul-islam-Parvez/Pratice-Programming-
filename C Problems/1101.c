#include<stdio.h>
int main()
{
    int a1,a2,i,t=0;
    while(i=1)
    {
        scanf("%d %d",&a1,&a2);
        if(a1==0 || a1<0 || a2==0 || a2<0)
            break;
        if(a1>a2)
            {
        for(i=a2;i<=a1;i++)
        {
            printf("%d ",i);
            t=t+i;
        }
        printf("Sum=%d\n",t);
        t=0;
            }
            if(a1<a2)
            {
        for(i=a1;i<=a2;i++)
        {
            printf("%d ",i);
            t=t+i;
        }
        printf("Sum=%d\n",t);
        t=0;
            }
    }
    return 0;
}
