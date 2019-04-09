#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        int c1,c2,c3;
        scanf("%d %d %d",&c1,&c2,&c3);
        if(c1!=0 && c2!=0 && c3!=0)
        {
            if(c1+c2+c3==180)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
            printf("NO");
    }
    return 0;
}
