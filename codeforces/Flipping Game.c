#include<stdio.h>
int main()
{
    int n,c=0,d=0,c1=0,d1=0,i,j;
    scanf("%d",&n);
    int p[n];
    int pi[n];
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(p[j]==0)
                pi[j]=1;
            else
                pi[j]=0;
        }
    for(j=0;j<n;j++)
    {
        printf("%d ",pi[j]);
       if(pi[j]==0)
        c++;
       else
        d++;
    pi[j]=p[j];
    }
    printf("\n");
        if(c1<c)
            c1=c;
        if(d1<d)
            d1=d;
            c=0;
            d=0;
    }

    printf("0==%d\n",c1);
     printf("1==%d",d1);
}
