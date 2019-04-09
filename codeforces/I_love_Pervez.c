#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p[n];
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    int s=p[0];
    int b=p[0],c=0;
    for(i=1;i<n;i++)
    {
        if(s>p[i])
        {
           s=p[i];
           c++;
        }
        else if(b<p[i])
        {
            b=p[i];
            c++;
        }

    }
    printf("%d\n",c);
}
