#include<stdio.h>
int main()
{
    int n,k=-1;
    scanf("%d",&n);
    int ans[n];
    while(n>0)
    {   n--;
        k++;
        printf("\n");
        int i=0,j=0,a,tot=0,si=0,s=0;
        scanf("%d",&a);
        for(i=0;i<a;i++)
        {
            int c[3];
            for(j=0;j<3;j++)
            {
                scanf("%d",&c[j]);
            }
            if(i>0)
                c[si]=1001;
            s=c[0];
            si=0;
            for(j=1;j<3;j++)
            {
                if(s>c[j])
                {
                    s=c[j];
                    si=j;
                }
            }
            tot=tot+s;
        }
        ans[k]=tot;
    }
    int i;
    for(i=0;i<=k;i++)
        printf("Case %d: %d\n",(i+1),ans[i]);
    return 0;
}
