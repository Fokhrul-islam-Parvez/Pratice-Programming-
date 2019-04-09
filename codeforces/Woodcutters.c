#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],h[n];
    for(i=0;i<n;i++)
        scanf("%d %d",&a[i],&h[i]);
    int r=0,c;
    if(n==1)
        c=1;
    else
        c=2;
    for(i=1;i<n-1;i++)
    {
        if(a[i]-(a[i-1]+r)>h[i]){
            c++;
            r=0;
        }
        else if(a[i]+h[i]<a[i+1])
        {
            r=(a[i]+h[i])-a[i];
            c++;

        }
        else
            r=0;
    }
    printf("%d\n",c);
}
