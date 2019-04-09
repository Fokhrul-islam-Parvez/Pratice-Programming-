#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,c=0;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            c++;
    }
    printf("%d\n",c);
}
