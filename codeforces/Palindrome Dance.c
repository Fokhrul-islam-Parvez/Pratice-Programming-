#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    int d[n],i;
    for(i=0;i<n;i++)
        scanf("%d",&d[i]);
        int m=n/2;
        int tk=0;
     if(n%2!=0)
    {
        if(d[m]==2)
        {
            if(a<b)
                tk=tk+a;
            else
                tk=tk+b;
        }
    for(i=1;i<=m;i++)
    {
        if(d[m-i]!=d[m+i])
        {
            if(d[m-i]==2 || d[m+i]==2)
            {
            if(d[m-i]==1)
                tk=tk+b;
            else if(d[m-i]==0)
                tk=tk+a;
             if(d[m+i]==1)
                tk=tk+b;
            else if(d[m+i]==0)
                tk=tk+a;
            }
            else
            {
                printf("-1\n");
                return 0;
            }
        }
        else if(d[m-i]==2 && d[m+i]==2)
            {
                if(a<b)
                    tk=tk+a+a;
                else
                    tk=tk+b+b;
            }
    }
    }
    else
    {
        for(i=1;i<=m;i++)
        {
            if(d[m-i]!=d[m+i-1])
            {
                if(d[m-i]==2 || d[m+i-1]==2)
                {
                    if(d[m-i]==1)
                tk=tk+b;
            else if(d[m-i]==0)
                tk=tk+a;
             if(d[m+i-1]==1)
                tk=tk+b;
            else if(d[m+i-1]==0)
                tk=tk+a;
                }

                else
                {
                    printf("-1\n");
                    return 0;
                }
            }
            else if (d[m-i]==2 && d[m+i-1]==2)
            {
                if(a<b)
                    tk=tk+a+a;
                else
                    tk=tk+b+b;
            }
        }

    }
    printf("%d\n",tk);
}
