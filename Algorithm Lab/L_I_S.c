#include<stdio.h>
int main()
{
    int array_size;
    printf("Please Enter Array Size: ");
    scanf("%d",&array_size);
    int array[array_size];
    int array2[array_size];
    printf("Please Enter Array Element\n");
    int i,j;
    for(i=0;i<array_size;i++)
    {
        scanf("%d",&array[i]);
        array2[i]=1;
    }
    for(i=1;i<array_size;i++)
    {
        for(j=0;j<=i-1;j++)
        {
            if(array[j]<array[i])
            {
                if(array2[j]>=array2[i])
                {
                    array2[i]++;
                }
            }
        }
    }
     for(i=0;i<array_size;i++)
    {
        printf("%d ",array2[i]);
    }
    int larg=array2[0];
  for(i=1;i<array_size;i++)
  {
      if(larg<array2[i])
        larg=array2[i];
  }
  printf("\n%d\n",larg);
   int list[larg],a=0;
   list[a]=array[0];
   for(i=1;i<array_size;i++)
   {
       if(list[a]<array[i])
        {
             a++;
            list[a]=array[i];
        }
   }
   for(i=0;i<larg;i++)
   {
       printf("%d ",list[i]);
   }
    return 0;
}
