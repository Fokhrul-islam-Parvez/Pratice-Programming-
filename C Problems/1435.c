#include<stdio.h>
int main()
{
    int a=1,i,j,a1=0,a2=a,b1=0,b2=a,e=1;
    while(a!=0)
    {
        scanf("%d",&a);
        int arr[a][a];

     for(i=a1;i<a2;i++)
     {
         for(j=b1;j<b2;j++)
            arr[i][j]=e;
     }

        for(i=0;i<a;i++)
        {
            for(j=0;j<a;j++)
                printf("%d\t",arr[i][j]);
            printf("\n");

        }
    }
}
