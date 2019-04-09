#include<stdio.h>
int main()
{
    int i,a;
    while(i=1)
    {
        scanf("%d",&i);
        if(i==0)
            break;
        for(a=1;a<=i;a++)
        {
           if(a<i)
            printf("%d ",a);
           if(a==i)
            printf("%dok\n",a);
        }

    }
}
