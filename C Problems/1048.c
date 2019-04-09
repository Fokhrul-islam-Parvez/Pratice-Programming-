#include<stdio.h>
int main()
{
    float a,p,t;
    scanf("%f",&a);
    if(a>=0.00 && a<=400.00)
    {
        p=(15*a)/100;
        t=p+a;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",t,p);
    }
     if(a>400.01 && a<=800.00)
    {
        p=(12*a)/100;
        t=p+a;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",t,p);
    }
    if(a>800.01 && a<=1200.00)
    {
        p=(10*a)/100;
        t=p+a;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",t,p);
    }
     if(a>1200.01 && a<=2000.00)
    {
        p=(7*a)/100;
        t=p+a;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",t,p);
    }
     if(a>2000.00)
    {
        p=(4*a)/100;
        t=p+a;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",t,p);
    }
    return 0;
}
