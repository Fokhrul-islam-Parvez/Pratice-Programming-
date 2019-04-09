#include<stdio.h>
int main()
{
    int n,k,a,b,c=1,i,d;
    scanf("%d %d",&n,&k);
    a=n%10;
    b=a;
    if(n%10!=0)
    {
    for(i=2;;i++)
    {
        if(a==k)
            break;
        c++;
        a=b*i;
         if(a%10==0)
            break;
        a=a%10;
    }
    }
    printf("%d\n",c);
}
