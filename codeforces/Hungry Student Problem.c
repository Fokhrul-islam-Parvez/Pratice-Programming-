#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        int n,a1,a2,a3;
        scanf("%d",&n);
        a1=n%3;
        a3=n/3;
        if(a1==0 || (a1==1 && a3>=2) || (a1==2 && a3>=4))
            printf("YES\n");
        else
        {
            a2=n%7;
            if(a2==0)
                 printf("YES\n");
            else if(a2%3==0)
                printf("YES\n");
            else
                printf("NO\n");

        }
    }
    return 0;
}
