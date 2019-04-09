#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    int t[m];
    int n[m];
    int a=0,i;
    long long tot=0;
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&n[i],&t[i]);
    }
    tot=n[0]*t[0];
    a=t[0];
     for(i=1;i<m;i++)
     {
         if(a>t[i])
         a=t[i];
       tot=tot+(n[i]*a);
     }
    printf("%I64d\n",tot);
}
