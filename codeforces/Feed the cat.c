#include<stdio.h>
int main()
{
    int th=0,h,m;
    scanf("%d %d",&h,&m);
    int tm=0;
    if(h<20)
    {th=(19-h);
    tm=(60-m);
    }
    th=(th*60)+tm;
    int h1,d,c,n;
    scanf("%d %d %d %d",&h1,&d,&c,&n);
    th=(th*d)+h1;
    int tb=th/n;
    int tb1=h1/n;
    if(th%n!=0)
        tb++;
    if(h1%n!=0)
        tb1++;
    int tc=tb*c;
    double tc1=tb1*c;
    double tcb=tc-((tc*20)/100.0);
    if(tcb<tc1)
    printf("%.4f\n",tcb);
    else
    printf("%.4f\n",tc1);
}
