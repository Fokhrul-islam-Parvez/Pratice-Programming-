#include<stdio.h>
int main()
{
    int n,k,b=0,a,i,c=0;
    scanf("%d %d",&n,&k);
    a=240-k;
    for(i=1;i<=n;i++)
    {
        b=b+(5*i);
        c++;
         if(b>a)
            c--;
         if(b>=a)
            break;

    }
    printf("%d\n",c);
}
