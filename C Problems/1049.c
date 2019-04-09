#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],a1[20],a2[20],a10[20],a11[20],a12[20],a13[20];
    char a3[20]={"vertebrado"}, a8[20]={"onivoro"}, a9[20]={"hematofago"};
    char a4[20]={"ave"}, a5[20]={"inseto"}, a6[20]={"carnivoro"},a7[20]={""};
    int i=0, j=0, k=0,l=0,m=0,n=0,o=0;
    scanf("%s",a);
    i=strcmp(a,a3);
    if(i==0)
    {
        scanf("%s",a1);
        j=strcmp(a1,a4);
        if(j==0)
        {
            scanf("%s",a2);
            k=strcmp(a2,a6);
            if(k==0)
            {
               printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
        }
        else
            {
               scanf("%s",a10);
                l=strcmp(a10,a8);
                if(l==0)
                {
                    printf("homem\n");
                }
                else
                {
                    printf("vaca\n");
                }
            }
    }
    else
    {
         scanf("%s",a11);
        m=strcmp(a11,a5);
        if(m==0)
        {
            scanf("%s",a12);
            n=strcmp(a12,a9);
            if(n==0)
            {
               printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
        }
        else
            {
               scanf("%s",a13);
                o=strcmp(a13,a9);
                if(o==0)
                {
                    printf("sanguessuga\n");
                }
                else
                {
                    printf("minhoca\n");
                }
            }
    }

    return 0;
}
