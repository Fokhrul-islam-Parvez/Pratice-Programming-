#include<stdio.h>
int main()
{
    int t,x=0;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        x++;
        int a,b;
        scanf("%d %d",&a,&b);
        printf("Case %d: %d\n",x,(a+b));
    }
}
