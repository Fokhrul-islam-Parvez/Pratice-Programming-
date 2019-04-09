#include<stdio.h>
int main()
{
    int s,t,i,tot=0,to,ts=0,c=0,a,b;
    scanf("%d %d",&s,&t);
    int st[s];
    for(i=0;i<s;i++){
        scanf("%d",&st[i]);
        ts=ts+st[i];
    }
    tot=10*(s-1);
    if(tot<t)
    {
        to=t-tot;
        if(ts==to)
        {
            printf("%d",(tot/5));
        }
        else if(ts<to)
        {
            a=to-ts;
            b=a/5;
            printf("%d\n",((tot/5)+b));
        }
        else
            printf("-1\n");


    }
    else
        printf("-1\n");
        return 0;
}
