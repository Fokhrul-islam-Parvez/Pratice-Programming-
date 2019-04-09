#include<stdio.h>
int main()
{
    int h,t;
    scanf("%d %d",&h,&t);
    int a[t],c=0,i,j,a1,d=1;
    for(i=0;i<t;i++)
        scanf("%d",&a[i]);
    c=a[0];
    for(i=0;i<t-1;i++)
    {
        if(a[i]<a[i+1])
        {
            a1=a[i+1]-a[i];
            c=c+a1;
        }
        else if(a[i]>a[i+1])
        {
            c=c+h;
            d++;
        }
    }
    printf("%d\n",c-d);
}
