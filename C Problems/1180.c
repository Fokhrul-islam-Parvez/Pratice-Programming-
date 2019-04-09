#include<stdio.h>
int main()
{
    int az,i,s,a;
    scanf("%d",&az);
    int ary[az];
    for(i=0;i<az;i++)
        scanf("%d",&ary[i]);
    s=ary[0];
    for(i=0;i<az;i++)
    {
        if(s>ary[i])
          {
              s=ary[i];
              a=i;
          }
    }
    printf("Menor valor: %d\nPosicao: %d\n",s,a);
    return 0;
}
