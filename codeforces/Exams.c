#include<stdio.h>
int main()
{
    int n,i,j,c,c1,k;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(b[j]>b[j+1])
            {
                c=b[j];
                c1=a[j];
                b[j]=b[j+1];
                a[j]=a[j+1];
                b[j+1]=c;
                a[j+1]=c1;

            }
        }
    }
    c=0,k=0;
    for(i=0;i<n-1;i++)
    {
        if(b[i]==b[i+1])
        {
            if(k<a[i])
                k=a[i];
            if(k<a[i+1])
                k=a[i+1];
        }
        if(a[i]<=a[i+1] && k<=a[i+1])
            c=0;
        else
        {
            if(b[i]==b[i+1]){
                c=0;
            }
            else
            {
                c=1;
                break;
            }
        }
    }
    if(c==0)
        printf("%d\n",b[n-1]);
    else
    {
        int l=a[0];
        for(i=0;i<n;i++)
        {
            if(l<a[i])
                l=a[i];
        }
        printf("%d\n",l);
    }
}
