#include<stdio.h>
int main()
{
    int t,k,c=0,i;
     scanf("%d %d",&t,&k);
    int p[t];
    for(i=0;i<t;i++)
        scanf("%d",&p[i]);
    for(i=0;i<t;i++)
    {
        if(p[i]+k<=5)
            c++;
    }
    c=c/3;
    printf("%d\n",c);
    return 0;
}
