#include<stdio.h>
int main()
{
    int n,i,j,d,c;
    long tot=0;
    scanf("%d",&n);
     int b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(b[j]<b[j+1])
            {
                d=b[j];
                b[j]=b[j+1];
                b[j+1]=d;
            }
        }
    }
    for(i=1;i<n;i++)
    {
        j=b[0]-b[i];
      tot=tot+j;
    }
    printf("%d\n",tot);
    return 0;

}
