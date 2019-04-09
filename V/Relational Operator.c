#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        long a,b;
        scanf("%d %d",&a,&b);
        if(a>b)
            printf(">\n");
         if(a<b)
            printf("<\n");
         if(a==b)
            printf("=\n");
    }
    return 0;
}
