#include<stdio.h>
int main()
{
    int t,i,a1,j,a2,a3=0,a=0;
    for(i=0;;i++)
    {
        scanf("%d",&a1);
        if(a1==0)
            break;
        for(j=a1;;j++)
        {
            if(j%2==0)
                {
            a3=a3+j;
            a++;
                }
            if(a==5)
                break;
        }
        printf("%d\n",a3);
        a=0;
        a3=0;
    }
    return 0;
}
