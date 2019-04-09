#include<stdio.h>
int main()
{
    int array_size;
    printf("Please Enter Array Size: ");
    scanf("%d",&array_size);
    int array[array_size];
    printf("Please Enter Array Element must be Ascending or Descending Order: \n");
    int i,j,k=0;
    for(i=0;i<array_size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Please Enter Search Number: ");
    int search_number;
    scanf("%d",&search_number);
    int start=0,last=array_size-1,mid;
    while(start<=last)
    {
        mid=(start+last)/2;
        if(search_number==array[mid])
        {
           printf("\nSearch number( %d ) is found\nIndex number = %d",search_number,mid);
           k=1;
           break;
        }
        if(search_number<array[mid])
            last=mid-1;
        else
            start=mid+1;
    }

      if(k==0)
      {
          printf("\nSearch number( %d ) is not found",search_number);
      }

return 0;
}
