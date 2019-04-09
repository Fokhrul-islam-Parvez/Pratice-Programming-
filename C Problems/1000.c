#include<stdio.h>
int main()
{
    int a1,i;
    while(i=1)
    {
        scanf("%d",&a1);
        if(a1==2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
            printf("Senha Invalida\n");
    }
    return 0;
}
