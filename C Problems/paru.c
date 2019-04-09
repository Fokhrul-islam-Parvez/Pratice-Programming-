#include<stdio.h>
int main()
{
    int t,i,c=0,b=0;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
        scanf("%d",&a[i]);
    for(i=0;i<t;i++)
    {
        if(a[i]>=10 && a[i]<=20)
            c=c+1;
        else
            b=b+1;
    }
    printf("%d in\n%d out\n",c,b);
    return 0;
}
