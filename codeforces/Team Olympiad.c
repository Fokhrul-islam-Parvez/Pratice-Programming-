#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],b1=0,b2=0,b3=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==1)
            b1++;
        if(a[i]==2)
            b2++;
        if(a[i]==3)
            b3++;
    }
    int m=min(b1,b2,b3);
}
