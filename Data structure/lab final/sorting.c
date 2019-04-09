#include<stdio.h>
int main()
{
    int asize,i,j,a,t;
    printf("Enter Your Array Size : ");
    scanf("%d",&asize);
    int arra[asize];
    printf("Enter Array Element : \n");
    for(i=0;i<asize;i++)
        scanf("%d",&arra[i]);
    while(t=1){
    printf("\n Sorting Category\n");
    printf("1. Ascending Order\n");
    printf("2. Descending Order\n");
    printf("3. Exit\n");
    printf("\nEnter Your Choice: ");
    int c;
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        {
            int s=arra[0];
            for(i=0;i<asize-1;i++)
            {
               for(j=0;j<asize-i-1;j++)
               {
                   if(arra[j]>arra[j+1])
                   {
                       a=arra[j];
                       arra[j]=arra[j+1];
                       arra[j+1]=a;
                   }
               }
            }
            for(i=0;i<asize;i++)
        printf("%d  ",arra[i]);
        }
        break;
    case 2:
        {
            int s=arra[0];
            for(i=0;i<asize-1;i++)
            {
               for(j=0;j<asize-i-1;j++)
               {
                   if(arra[j]<arra[j+1])
                   {
                       a=arra[j];
                       arra[j]=arra[j+1];
                       arra[j+1]=a;
                   }
               }
            }
            for(i=0;i<asize;i++)
        printf("%d  ",arra[i]);
        }
        break;
   case 3:
       return;
    }

    }

}
