#include<stdio.h>
int main()
{
    float n1,n2,n3,n4,n5,av,fv;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    av=(n1*2+n2*3+n3*4+n4*1)/10;
    printf("Median = %0.1f\n",av);
    if(av>=7.0)
     printf("Aluno aprovado.\n");
    else if(av<5.0)
     printf("Aluno reprovado.\n");
    else if(5.0<av && av<6.9)
     printf("Aluno em exame.\n");
    scanf("%f",&n5);
    printf("Nota do exame: %0.1f\n",n5);
    fv=(av+n5)/2.0;
    if(fv>=5.0)
     printf("Aluno aprovado.\n");
    if(fv<=4.9)
     printf("Aluno reprovado.\n");
    printf("Media final: %0.1f\n",fv);
    return 0;

}
