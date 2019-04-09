#include<stdio.h>
int main()
{
    int t,i,k,n,w,tot=0;
    scanf("%d %d %d",&k,&n,&w);
    for(i=1;i<w+1;i++)
    {
        tot=tot+i*k;
    }
    t=tot-n;
    if(t<0)
        t=0;
    printf("%d\n",t);
    return 0;
}
