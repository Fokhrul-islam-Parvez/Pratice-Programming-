#include<stdio.h>
int main()
{
    int i,a,b,s=0,s1=0,t;
    scanf("%d %d",&a,&b);
    if(a>0)
    {
    for(i=1;i<a;i++)
        if(i%2!=0)
           s=s+i;
    }
    printf("%d\n",s);
    if(a<0)
    {
    for(i=-1;i>a;i--)
        if(i%2!=0)
           s=s+i;
    }
    if(b>0)
    {
    for(i=1;i<b;i++)
        if(i%2!=0)
           s1=s1+i;
    }
    printf("%d\n",s1);
    if(b<0)
    {
    for(i=-1;i>b;i--)
        if(i%2!=0)
           s1=s1+i;
    }
    if(s<0 || s1<0)
        t=s+s1;
    else
        t=s-s1;
    printf("%d\n",t);
    return 0;
}
