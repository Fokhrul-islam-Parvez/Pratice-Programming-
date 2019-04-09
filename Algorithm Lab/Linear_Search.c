#include<stdio.h>
int main()
{
    int array_size;
    printf("Please Enter Array Size: ");
    scanf("%d",&array_size);
    int array[array_size];
    printf("Please Enter Array Element\n");
    int i=0,j=0;
    for(i=0;i<array_size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Please Enter Search Number: ");
    int search_number;
    scanf("%d",&search_number);
    for(i=0;i<array_size;i++)
    {
        if(array[i]==search_number)
        {
            printf("%d ",i);
            printf("\nSearch number( %d ) is found\nIndex number = %d",array[i],i);
            j=1;
            break;
        }
    }
    if(j==0)
    {
         printf("\nSearch number( %d ) is not found",search_number);
    }
    return 0;
}
