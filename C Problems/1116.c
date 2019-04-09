#include<stdio.h>
int main()
{
    int a,b,i,a1=0,a2=0,b2=0,e=0;
    while(i!=2)
    {
        paru:
        scanf("%d %d",&a,&b);
        a1=a1+1;
        if(a>b)
            a2=a2+1;
        if(a<b)
            b2=b2+1;
        if(a==b)
            e=e+1;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&i);
        if(i==1)
            goto paru;
    }
    printf("%d grenais\n",a1);
    printf("Inter: %d\n",a2);
    printf("Gremio: %d\n",b2);
    printf("Empates: %d\n",e);
    if(a1>a2)
        printf("Inter venceu mais\n");
    if(a2>a1)
        printf("Gremio venceu mais\n");
    if(a1==a2)
        printf("Nao houve vencedor\n");
    return 0;
}
