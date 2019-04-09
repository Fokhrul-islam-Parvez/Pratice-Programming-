#include<stdio.h>
int main()
{

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int n[20];
    int i=0;
     n[i]=a*b*c;
     i++;
     n[i]=a+b*c;
     i++;
     n[i]=(a+b)*c;
     i++;
     n[i]=a*(b+c);
     int j;

     int big=n[0];
     for(j=0;j<i+1;j++)
     {
         printf("%d ",n[j]);
         if(big<n[j]){
            big=n[j];
         }
     }
     printf("%d\n",big);
     return 0;

}
