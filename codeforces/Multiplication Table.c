#include<stdio.h>
int main()
{
    int n,s;
    scanf("%d %d",&n,&s);
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(s%i==0)
        {
           if(s/i<=n)
            c++;
        }
    }
    printf("%d\n",c);
}
