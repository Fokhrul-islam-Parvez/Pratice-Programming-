#include<stdio.h>
int main()
{
    int n,k,m,d,i;
    scanf("%d %d %d %d",&n,&k,&m,&d);
    t=n/k;
    for(i=0;i<d;i++)
    {
        if(t<=m)
        {
           t2=t*k;
           t3= n/k;
           t4=t3*k;

        }
        else
            t--;

    }
}
