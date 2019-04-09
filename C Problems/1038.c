#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    float g,c,d,f,e;
    if(a==1){
    f=b*4.00;
    printf("Total: R$ %0.2f\n",f);
    }
    else if(a==2){
    c=b*4.50;
    printf("Total: R$ %0.2f\n",c);
    }
    else if(a==3){
    d=b*5.00;
    printf("Total: R$ %0.2f\n",d);
    }
    else if(a==4){
    e=b*2.00;
    printf("Total: R$ %0.2f\n",e);
    }
    else if(a==5){
    g=b*1.50;
    printf("Total: R$ %0.2f\n",g);
    }
return 0;
}
