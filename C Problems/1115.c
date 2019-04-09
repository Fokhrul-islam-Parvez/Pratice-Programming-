#include<stdio.h>
int main()
{
   double a,b1[2],av;
   int i,j=1;
   while(i!=2)
   {
       OUT:
       scanf("%lf",&a);
       if(a>=0 && a<=10)
       {
           b1[j]=a;
       }
       else
       {
        printf("nota invalida\n");
        goto OUT;
       }
        if(j==2)
        {
           av=(b1[1]+b1[2])/2;
           printf("media = %.2lf\n",av);
           printf("novo calculo (1-sim 2-nao)\n");
           paru:
        scanf("%d",&i);
        if(i!=1 && i!=2){
            printf("novo calculo (1-sim 2-nao)\n");
        goto paru;}
        j=0;
        }
        j++;
   }
}
