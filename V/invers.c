#include<stdio.h>
int main()
{
    int r1=26,r2=3,t1=0,t2=1,x=1,t=0;
    while(x==1){
    int d=r1/r2;
    int R=r1%r2;
    t=(t1-(t2*d));
     t1=t2;
     t2=t;
     r1=r2;
     r2=R;
     if(r2<=0 || r1<=1)
        break;
    }
   printf("%d\n",t1);
  int b;
  char c='A';
  b=c-65;
  c=25+65;
  printf("%d",b);
  printf("\n%c",c);
  enc
  }
