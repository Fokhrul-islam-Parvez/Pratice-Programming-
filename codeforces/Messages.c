#include<stdio.h>
int main()
{
    int n,a,b,c,t,i;
    scanf("%d %d %d %d %d",&n,&a,&b,&c,&t);
    int arr[n],t1=0,t2=0,t3=0;
    int t4=n*a;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        t1=t1+(a-((t-arr[i])*b));
        t2=t2+(t-arr[i]);
    }
    t3=t1+(t2*c);
    if(t4<t3)
        printf("%d\n",t3);
    else
        printf("%d\n",t4);

}
