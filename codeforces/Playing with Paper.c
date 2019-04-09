#include<stdio.h>
int main()
{

    long long int a=0,b=0,c=0,d;
    scanf("%I64d %I64d",&a,&b);
    while(a!=0 && b!=0){
    c=c+(a/b);
    a=a%b;
    d=b;
    b=a;
    a=d;
    }
    printf("%I64d\n",c);
}
