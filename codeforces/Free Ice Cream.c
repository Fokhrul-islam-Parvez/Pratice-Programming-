#include<stdio.h>
int main()
{
    int i,a,cn=0;
    char c='k';
    long long int b;
    scanf("%d %I64d",&a,&b);
    int s[a];
    for(i=0;i<a;i++)
    {
        scanf("%c",&c);
         scanf("%c",&c);
        scanf("%d",&s[i]);
        if(c=='+'){
            b=b+s[i];
        }
        else
        {
            if(b>=s[i])
            b=b-s[i];
            else
            cn++;
        }
    }
    printf("%I64d %d\n",b,cn);
}
