#include<stdio.h>
int main()
{
    int i;
    while(scanf("%d",&i)!=EOF)
    {
        if(i==0)
            printf("vai ter copa!\n");
        else
            printf("vai ter duas!\n");
    }
    return 0;
}
