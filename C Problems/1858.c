#include<stdio.h>
int main()
{
    int t,l,i,a=0;
    scanf("%d",&t);
    int ar[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&ar[i]);
    }
    l=ar[0];
    for(i=0;i<t;i++)
    {
        if(l>ar[i])
        {
            l=ar[i];
            a=i;
        }
    }
    printf("%d",a+1);
    return 0;
}
