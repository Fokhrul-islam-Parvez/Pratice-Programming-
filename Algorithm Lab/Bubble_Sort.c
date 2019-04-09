#include<stdio.h>
int main()
{
    int array_size;
    printf("Please Enter Array Size: ");
    scanf("%d",&array_size);
    int array[array_size];
    printf("Please Enter Array Element\n");
    int i,j,k;
    for(i=0;i<array_size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<array_size-1;i++)
    {
        for(j=0;j<array_size-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                k=array[j];
                array[j]=array[j+1];
                array[j+1]=k;
            }
        }
    }
    for(i=0;i<array_size;i++)
    {
        printf("%d  ",array[i]);
    }
    return 0;
}
