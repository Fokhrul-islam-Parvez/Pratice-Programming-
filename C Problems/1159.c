#include<stdio.h>
int main()
{
    int i,a=0,a1=0,j;
    while(i>0)
    {
        scanf("%d",&i);
        for(j=i;;j++)
        {
            if(j%2==0)
            {
                a1=a1+j;
                a++;
            }
            if(a==5)
                break;
        }
        printf("%d\n",&a1);
        a=0;
        a1=0;
        return 0;
    }

}
