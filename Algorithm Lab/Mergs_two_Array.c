#include<stdio.h>
int main()
{
    int first_array_size;
    int second_array_size;
    printf("Please Enter First Array Size: ");
    scanf("%d",&first_array_size);
    int array1[first_array_size];
    printf("Please Enter First Array Element\n");
    int i,j,k,b=0;
    for(i=0;i<first_array_size;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("Please Enter Second Array Size: ");
    scanf("%d",&second_array_size);
    int array2[second_array_size];
    printf("Please Enter Second Array Element\n");
    for(i=0;i<second_array_size;i++)
    {
        scanf("%d",&array2[i]);
    }
    int array[first_array_size+second_array_size];
    for(i=0;i<first_array_size;i++)
    {
        array[i]=array1[i];
        b++;
    }
    for(j=0;j<second_array_size;j++)
    {
         array[b]=array2[j];
         b++;
    }
    for(i=0;i<first_array_size+second_array_size-1;i++)
    {
        for(j=0;j<first_array_size+second_array_size-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                k=array[j];
                array[j]=array[j+1];
                array[j+1]=k;
            }
        }
    }
    for(i=0;i<first_array_size+second_array_size;i++)
        printf("%d ",array[i]);
    return 0;
}
