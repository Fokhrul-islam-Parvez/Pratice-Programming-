#include<stdio.h>
int main()
{
    int n,i;
    int t=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        t=t*(n-i);
    printf("%ld\n",t);
    return 0;
}
