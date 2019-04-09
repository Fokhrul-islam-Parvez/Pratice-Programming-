#include<stdio.h>
int main()
{
    int i,a,b,c=0;
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++)
        {
            if(c<a-1)
            printf("%d ",i);
            if(c==a-1)
            printf("%dok",i);
            c++;
            if(c==a)
            {
                printf("\n");
                c=0;
            }
        }
        return 0;

}

