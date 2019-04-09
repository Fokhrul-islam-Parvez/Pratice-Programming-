#include<stdio.h>
int main()
{
    int a,am,c,d,d1,d2,d3,b,bm,c1,c2;
    scanf("%d %d %d %d",&a,&am,&b,&bm);
    if(a<b && b<24)
    {
      c=(b*60+bm)-(a*60+am);
      c1=c/60;
      c2=c%60;
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c1,c2);
    }
    else
    {
        (b<a && a<24);
         d=24-a;
         d1=(d*60-am)+(b*60+bm);
         d2=d1/60;
         d3=d1%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",d2,d3);
    }
    return 0;
}
