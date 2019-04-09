#include<stdio.h>
int main()
{
    int n,c=0,d=0,i,a1,a2;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0){
            c++;
            a1=i;
        }
        else{
            d++;
            a2=i;
        }
    }
    if(c==1)
        printf("%d\n",a1+1);
    else
         printf("%d\n",a2+1);
         return 0;

}
