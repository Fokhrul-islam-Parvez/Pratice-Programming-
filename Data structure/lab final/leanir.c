#include<stdio.h>
int main()
{
    int c=0;
    int array[11]={1,2,3,4,5,6,7,8,9,10,11};
    int i,f,l,t=1,m;
    for(i=0;i<11;i++)
    {
        c++;
        if(array[i]==8)
        {
            printf("%d",c);
            break;
        }
    }
    return 0;
}
