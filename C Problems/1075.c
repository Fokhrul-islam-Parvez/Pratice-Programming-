#include<stdio.h>
int main()
{
    int i,a[100],h,b=0;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    h=a[0];
     for(i=0;i<10;i++)
     {
         if(h<a[i]){
            h=a[i];
            b=i;}
     }
     printf("%d\n%d\n",h,b+1);
     return 0;
}
