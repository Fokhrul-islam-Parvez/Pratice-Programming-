#include<stdio.h>
int main()
{
    int t,h=0,l=0,i,x=0;
    scanf("%d",&t);
    while(t!=0)
    {
        h=0,l=0;
        x++;
        t--;
        int n;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(i!=0)
            {
                if(a[i-1]<a[i])
                    h++;
                if(a[i-1]>a[i])
                    l++;

            }

        }
        printf("Case %d: %d %d\n",x,h,l);
    }
}
