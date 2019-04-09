#include<stdio.h>
int main()
{
    int n,a,b,c=0,d=0,i,j,m=1;
    scanf("%d",&n);
     a=n/2;
     b=a;
     if(n%2!=0)
       a=a+1;
       while(m==1){
     for(i=2,j=2;i<a,j<b;i++,j++)
     {

         if(a%i==0)
            c=1;
         if(b%j==0)
            d=1;
     }
     if(c==0){
        a++;
        b--;
        d=0;
     }
     else if(d==0)
     {
         a++;
         b--;
         c=0;
     }
     i=2;
     j=2;
     if(c==1 && d==1)
        break;
       }
     printf("%d %d\n",a,b);
}
