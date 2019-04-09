#include<stdio.h>
int main()
{
    float a,b,c,p,A;
    scanf("%f %f %f",&a,&b,&c);
    if(b+c>a && a+c>b && a+b>c)
    {
        p=a+b+c;
        printf("Perimetro = %.1f\n",p);
    }
    else
    {
        A=(a+b)/2;
        printf("Area = %.1f\n",A*c);
    }
 return 0;
}
