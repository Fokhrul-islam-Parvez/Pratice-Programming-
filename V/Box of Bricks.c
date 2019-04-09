#include<stdio.h>
int main()
{
    int x=1,i,n=0;
    while(x>0)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        int a[n],t=0,h=0,m=0,i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            t=t+a[i];
        }
        h=t/n;
         for(i=0;i<n;i++)
        {
            if(h<a[i])
            {
                m=m+(a[i]-h);
            }
        }
        printf("Set #%d\n",x);
        printf("The minimum number of moves is %d.\n",m);
        printf("\n");
        x++;s
    }
}
