#include<stdio.h>
int main()
{
    int n,a,b,ct=0,i;
    scanf("%d %d %d",&n,&a,&b);
    char c[n];
    for(i=0;i<n;i++)
    {
        scanf("%c",&c[i]);
        scanf("%c",&c[i]);
        if(c[i]=='.')
            ct++;
    }
    if(ct>a+b)
        printf("%d\n",a+b);
    else
        printf("%d\n",ct);
}
