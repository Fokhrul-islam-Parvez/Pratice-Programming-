#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p[n];
    int i,j,to=0;
    for(i=0;i<n;i++)
    {
         for(j=0;j<3;j++)
         {
             scanf("%d",&p[j]);
             to=to+p[j];
         }
    }
    if(to==0)
        printf("YES\n");
    else
        printf("NO\n");
}
