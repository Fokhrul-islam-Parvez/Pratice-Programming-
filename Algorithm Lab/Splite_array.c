#include<stdio.h>
int main()
{
    printf("How many Number : ");
    int num;
    scanf("%d",&num);
    printf("Enter Number\n");
    int array[num],i,j=-1,k=-1;
    int even[num],odd[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<num;i++)
    {
        if(array[i]%2==0)
        {
            j++;
            even[j]=array[i];

        }
        else
        {
            k++;
            odd[k]=array[i];
        }
    }
    printf("Even Number : ");
    for(i=0;i<j;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\nOdd Number : ");
    for(i=0;i<k;i++)
    {
        printf("%d ",odd[i]);
    }
    return 0;
}
