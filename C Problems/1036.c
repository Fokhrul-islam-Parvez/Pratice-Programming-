#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, r1,r2,b1,b2,b3;
    scanf("%f %f %f",&a,&b,&c);
    if(a!=0){
    b1=pow(b,2);
    b2=b1-(4.0*a*c);
    if(b2>=0)
    {
    b3=sqrt(b2);
    r1=(-b+b3)/(2.0*a);
    r2=(-b-b3)/(2.0*a);
    printf("R1 = %0.5f\nR2 = %0.5f\n",r1,r2);
    }
    else
    printf("Impossivel calcular\n");
    }
    else
        printf("Impossivel calcular\n");
    return 0;
}

