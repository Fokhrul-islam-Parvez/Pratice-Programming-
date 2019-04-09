#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    int a1[n];
    int a2[n-1];
    int a3[n-2];
    int a4[n-1];
    for(i=0;i<n;i++)
        scanf("%d",&a1[i]);
    for(i=0;i<n-1;i++)
        scanf("%d",&a2[i]);
    for(i=0;i<n-2;i++)
        scanf("%d",&a3[i]);
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n-2;j++)
        {
            if(a1[i]==a3[j])
            {
                a3[j]=0;
                c=1;
                break;
            }
        }
         if(c==0)
                printf("%d\n",a1[i]);
    }
     return 0;
}
