#include<stdio.h>
int main()
{
    int t,x=2;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        int a;
        scanf("%d",&a);
        if(x%2==0)
        printf("%d %d\n",(a-a),(a));
        else
        printf("%d %d\n",(a-(a-1)),a-1);
         x++;
    }
}
