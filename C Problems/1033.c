#include<stdio.h>
int main()
{
    int a,b,i,t1,t;
    scanf("%d %d",&a,&b);
    if(a<b)
        {
    for(i=a;i<=b;i++)
    {
        if(i%5==0)
            {
            t=i+2;
            if(t<b)
            printf("%d\n",t);
            t1=i+3;
            if(t1<b)
                printf("%d\n",t1);
            }
    }
        }
       if(a>b)
        {
    for(i=b;i<=a;i++)
    {
        if(i%5==0){
            t=i+2;
            if(t<a)
            printf("%d\n",t);
            t1=i+3;
            if(t1<a)
                printf("%d\n",t1);
        }
    }
        }
        return 0;
}
