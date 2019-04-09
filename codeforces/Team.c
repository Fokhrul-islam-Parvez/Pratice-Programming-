#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a,b,c,d=0;
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a==1 && b==1)
            d++;
        else if(b==1 && c==1)
            d++;
        else if(a==1 && c==1)
            d++;

    }
    printf("%d\n",d);
    return 0;
}
