#include<stdio.h>
int main()
{
    int b1=1,b2=0,b3=0,big;
     if(b1>b2)
    {
        if(b1>b3)
            big=b1;
        else
            big=b3;
    }
    else
    {
        if(b2>b3)
            big=b2;
        else
            big=b3;
    }
    printf("%d\n",big);
}
