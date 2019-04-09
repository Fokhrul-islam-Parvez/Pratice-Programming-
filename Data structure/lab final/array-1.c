#include<stdio.h>
int main()
{
    int asize,i,j;
    printf("Enter Your Array Size : ");
    scanf("%d",&asize);
    int arra[asize];
    printf("Enter Array Element : \n");
    for(i=0;i<asize;i++)
        scanf("%d",&arra[i]);
    printf("Before Delete: \n");
    for (i=0;i<asize;i++)
        printf("%d\n",arra[i]);
    printf("Enter Delete Element Index: \n");
    int delindex;
    scanf("%d",&delindex);
    for(i=0;i<asize;i++)
    {
        if(i==delindex-1)
        {
            for(j=delindex-1;j<asize-1;j++)
                arra[j]=arra[j+1];
            break;
        }

    }
    printf("After Delete: \n");
     for (i=0;i<asize-1;i++)
        printf("%d\n",arra[i]);
    return 0;
}
