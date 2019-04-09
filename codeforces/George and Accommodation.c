#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p[n];
    int q[n];
    int i;
    int c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
         scanf("%d",&q[i]);
         if(q[i]-p[i]!=0 && (q[i]-p[i])>=2)
            c++;
    }
    printf("%d\n",c);
}
