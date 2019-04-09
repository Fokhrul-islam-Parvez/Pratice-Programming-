#include<stdio.h>
int main()
{
    int x,i,j=0;
    scanf("%d",&x);
    char ch[3];
    for(i=0;i<x;i++)
    {
        scanf("%s",ch);
        if(strcmp("++X",ch)==0 || strcmp("X++",ch)==0)
            j++;u
        else
            j--;
    }
    printf("%d\n",j);
    return 0;
}
