#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(c<b&&a<d&&(a+b)<(c+d)&&c>-1&&d>-1&&a%2==0)
    printf("Valores aceitos\n");
    else
    printf("Valores noa aceitos\n");
    return 0;
}
