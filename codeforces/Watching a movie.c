#include<stdio.h>
int main()
{
    int n,x,s=0,i,j;
    scanf("%d %d",&n,&x);
    int a[n],b[n],t=0;
    for(i=0;i<n;i++)
        scanf("%d %d",&a[i],&b[i]);
    for(i=0;i<n;i++)
    {  for(j=0;;j++)
        {
            s=s+x;
            if(s>=a[i])
            {
               s=s-x;
               t=t+(b[i]-s);
               s=b[i];
               break;
            }
        }
    }
    printf("%d\n",t);
}
