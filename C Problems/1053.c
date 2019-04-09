#include<stdio.h>
int main()
{
    int a1[5],a2,a3,a4,a5,a6[5],a7,a8,a9,a10;
    int b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14;
    char c1,c2,c3,c4;
    scanf("%s %d",&a1,&a2);
    scanf("%d %c %d %c %d",&a3,&c1,&a4,&c2,&a5);
    scanf("%s %d",&a6,&a7);
    scanf("%d %c %d %c %d",&a8,&c3,&a9,&c4,&a10);
    b1=a7-a2;
    b2=b1*24*60*60;
    b3=a3*60*60+a4*60+a5;
    b4=a8*60*60+a9*60+a10;
    b5=b2-b3+b4;
    b6=b5/(60*60*24);//days
    b7=b6*24*60*60;
    b8=b5-b7;
    b9=b8/(60*60);//hours
    b13=b9*60*60;
    b10=b8-b13;
    b11=b10/60; //minutes
    b14=b11*60;
    b12=b10-b14;//seconds
    printf("%d dia(s)\n",b6);
    printf("%d hora(s)\n",b9);
    printf("%d minuto(s)\n",b11);
    printf("%d segundo(s)\n",b12);
    return 0;
}
