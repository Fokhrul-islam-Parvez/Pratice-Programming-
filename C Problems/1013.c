#include<stdio.h>
int main()
{
int a,b,c,M,m;
scanf("%d %d %d",&a,&b,&c);
M=(a+b+abs(a-b))/2;
m=(M+c+abs(M-c))/2;
printf("%d eh o maior\n",m);
return 0;
}
