#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k,l,a;
     for(i=0;i<=n;i++)
     {
         for(j=n-i;j>0;j--)
             printf("  ");
         for(k=0;k<=i;k++){
                a=k;
                if(a==0)
                 printf("%d",k);
         else
        printf(" %d",k);
         }
        for(l=i-1;l>=0;l--){
            printf(" %d",l);
        }
        printf("\n");
     }
   for(i=0;i<=n-1;i++){
        for(j=i;j>=0;j--)
             printf("  ");
     for(k=0;k<=n-1-i;k++){
            a=k;
     if(a==0)
        printf("%d",k);
     else
      printf(" %d",k);
     }
    for(l=k-2;l>=0;l--){
        printf(" %d",l);
    }
    printf("\n");
   }
}
