#include<stdio.h>
int main()
{
    int n,t1;
    scanf("%d %d",&n,&t1);
    int a[n],i,t;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        t=86400-a[i];
        if(t>=t1){
            printf("%d\n",i+1);
            break;
        }
        else
            t1=t1-t;
    }
}
