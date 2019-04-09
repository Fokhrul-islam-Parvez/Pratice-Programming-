#include<stdio.h>
int main()
{
    int t,p,i;
    scanf("%d",&t);
    while(t>0)
    {
        p=0;
        t--;
        int n,k=0,l=0,m,o=0;
        scanf("%d %d",&n,&k);
        int a[k];
        for(i=0;i<k;i++)
        {
            scanf("%d",&a[i]);
            int a1=a[i]-p-1;
            p=a[i];
            if(l<a1)
            l=a1;
            if(i==(k-1))
            {
                o=n-a[i];
                if(l<o)
                    l=o;
            }
        }
        int u=0;
        if(k==1 || l==o)
            u=1;
        else
            u=2;
        m=1+(l/u);
        printf("%d\n",m);
        m=0;
    }

}
