#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i;
    ptr=(int *)calloc(20,sizeof(int));
  ptr[19]=5;
printf("%d\n",ptr[19]);
     free(ptr);
    ptr=(int *)calloc(30,sizeof(int));
    ptr[19]=9;
printf("%d\n",ptr[19]);
    free(ptr);
     return 0;
}
