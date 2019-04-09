#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,s;
    double a[3],a1,a2,a3;
    for(i=0;i<3;i++)
    scanf("%lf",&a[i]);
    for(i=0;i<2;i++)
    {
        for(j=0;j<3-1-i;j++)
        {
            if(a[j]<a[j+1])
            {
                s=a[j];
                a[j]=a[j+1];
                a[j+1]=s;
            }
        }
    }
    a1=pow(a[0],2);
    a2=pow(a[1],2);
    a3=pow(a[2],2);
    if(a[0]>=a[1]+a[2])
    printf("NAO FORMA TRIANGULO\n");
    else{
    if(a1==a2+a3)
    printf("TRIANGULO RETANGULO\n");
    if(a1>a2+a3)
    printf("TRIANGULO OBTUSANGULO\n");
    if(a1<a2+a3)
    printf("TRIANGULO ACUTANGULO\n");
    if (a[0]==a[1]&& a[1]==a[2])
    printf("TRIANGULO EQUILATERO\n");
    else if(a[0]==a[1]&& a[1]!=a[2] || a[0]==a[2] && a[2]!=a[1] || a[2]==a[1] && a[1]!=a[0])
    printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
