#include<stdio.h>
int main()
{
    int i,n,a=1,b=1;
    scanf("%d",&n);
    printf("0 1 1");
    for(i=1;i<46;i++)
    {
        a=a+b;
        if(a>=n)
        break;
        printf(" %d",a);
        b=b+a;
        if(b>=n)
            break;
        printf(" %d",b);
    }
    return 0;
}
