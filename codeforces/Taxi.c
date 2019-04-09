#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    int tot=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        tot=tot+arr[i];
    }
    int ca=tot/4;
    if(tot%4!=0)
        ca++;
    printf("%d\n",ca);
    return 0;
}
