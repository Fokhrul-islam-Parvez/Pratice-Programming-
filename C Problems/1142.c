#include<stdio.h>
int main()
{
    int a,i,j,b=1,c=3;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        for(j=b;j<=c;j++)
            printf("%d ",j);
    printf("PUM\n");
    b=b+4;
    c=c+4;
    }
}
