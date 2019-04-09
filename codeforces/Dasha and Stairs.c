#include<stdio.h>
int main()
{
    int e,o;
    scanf("%d %d",&e,&o);
    if(e==o || e+1==o || o-1==e)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
