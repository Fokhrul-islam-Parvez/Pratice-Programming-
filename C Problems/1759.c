#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        if(j<i-1)
        printf("Ho ");
        else
            printf("Ho!\n");
    }
    return 0;
}
