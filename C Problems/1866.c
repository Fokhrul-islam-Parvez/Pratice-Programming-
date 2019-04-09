#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,j,t=1;
        scanf("%d",&a);
        for(j=1;j<a;j++){

        if(j%2!=0)
            t=t-1;
        else
            t=t+1;
        }
        printf("%d\n",t);
    }
}
