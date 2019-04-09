#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r[n];
    int i,j;
    long long tr=0;
    int c[n],k=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&r[i]);
        tr=tr+r[i];
    }
    int l=0,l2=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
        if(l<=c[i])
            {   l2=l;
                l=c[i];
            }
        else
        {
            if(l2<c[i])
                l2=c[i];

        }
    }
    if(tr<=l+l2)
        printf("YES\n");
    else
        printf("NO\n");
}
