#include<stdio.h>
int main()
{
int a=1,i,j;
while(a!=0)
{
    scanf("%d",&a);
    int ar[a][a];
    int a1=0,a2=a,a3=0,a4=a,e=1,t;
    for(t=0;t<a;t++)
    {
         for(i=a1;i<a2;i++)
         {
              for(j=a3;j<a4;j++)
                 {
                   ar[i][j]=e;
                 }
          }
        a1=a1+1;
        a2=a2-1;
        a3=a3+1;
        a4=a4-1;
        e++;
    }




    for(i=0;i<a;i++)
    {
        printf("   ");
        for(j=0;j<a;j++)
        {
            if(j<a-1)
            printf("%d ",ar[i][j]);
            if(j==a-1)
            printf("%d",ar[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
return 0;
}
