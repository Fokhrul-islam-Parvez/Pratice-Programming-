#include<stdio.h>
int main()
{
    float a,a1,a2,a3,a4,a5,a6,a7;
    scanf("%f",&a);
    if(0.00<a && a<=2000.00)
        printf("Isento");
    if(2000.0<a && a<=3000.00)
    {
        a1=a-2000.00;
        a2=(8*a1)/100.00;
        printf("R$ %0.2f",a2);
    }
    if(3000.00<a && a<=4500.00)
    {
        a1=a-2000.00;
        a2=a1-1000.00;
        a3=(8*1000.00)/100.00;
        a4=(18*a2)/100.00;
        a5=a3+a4;
        printf("R$ %.2f",a5);
    }
    if(4500.00<a)
    {
        a1=a-2000.00;
        a2=a1-1000.00;
        a3=a2-1500.00;
        a4=(8*1000.00)/100.00;
        a5=(18*1500.00)/100.00;
        a6=(28*a3)/100.00;
        a7=a4+a5+a6;
        printf("R$ %.2f",a7);
    }
    return 0;
}

