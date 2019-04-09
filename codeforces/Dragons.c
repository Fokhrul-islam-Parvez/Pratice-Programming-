#include<stdio.h>
int main()
{
    int i,j,k1,k2,s,n,c=0;
    scanf("%d %d",&s,&n);
    int d[n], b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&d[i],&b[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(d[j]>d[j+1])
            {
                k1=d[j];
                k2=b[j];
                d[j]=d[j+1];
                b[j]=b[j+1];
                d[j+1]=k1;
                b[j+1]=k2;
            }
        }
    }
    for(i=0;i<n;i++){

        if(s>d[i])
        {
            s=s+b[i];
        }
        else{
            printf("NO\n");
            c=1;
            break;
        }
    }
    if(c==0)
        printf("YES\n");
    return 0;
}
