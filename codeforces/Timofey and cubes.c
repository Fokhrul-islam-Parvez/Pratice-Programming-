#include<stdio.h>
int main()
{
    int n,i,c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n/2;i=i+2)
    {
        c=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=c;
    }
    for(i=0;i<n;i++){
       if(i!=n-1)
          printf("%d ",a[i]);
       else
          printf("%d\n",a[i]);
    }
}
