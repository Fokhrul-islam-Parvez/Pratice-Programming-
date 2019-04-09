#include<stdio.h>
int main()
{
    int j;
    float s=1.0,i=2.0;
    for(j=3;j<=39;j=j+2)
    {

        s=s+(j/i);
        i=i*2.0;
    }
    printf("%.2f\n",s);
    return 0;
}
