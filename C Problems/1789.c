#include<stdio.h>
int main()
{
    int a,i,l;
    while(scanf("%d",&a)!=EOF)
    {
        int ar[a];
        for(i=0;i<a;i++)
        {
            scanf("%d",&ar[i]);
        }
        l=ar[0];
        for(i=0;i<a;i++)
        {
            if(l<ar[i])
                l=ar[i];
        }
        if(l<10)
        {
            printf("1\n");
        }
        else if(l>=10 && l<20)
            printf("2\n");
        else
        printf("3\n");
    }
    return 0;
}
