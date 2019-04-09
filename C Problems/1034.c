#include<stdio.h>
int main()
{
    int i,a,a1=0,g=0,d=0;
    while(i!=4)
    {
        scanf("%d",&a);
        if(a==1)
            a1=a1+1;
        if(a==2)
            g=g+1;
        if(a==3)
            d=d+1;
        if(a==4)
            break;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a1);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);
    return 0;
}
