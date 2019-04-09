#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i;
    ptr=(int *)malloc(sizeof(int));
    printf("%d",ptr);
  ptr[19]=5;
  for(i=0;i<20;i++)
    scanf("%d",&ptr[i]);
  for(i=0;i<20;i++)
printf("%d\n",ptr[i]);
     free(ptr);
     return 0;
}
