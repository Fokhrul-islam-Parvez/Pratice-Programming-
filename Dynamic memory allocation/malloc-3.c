#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i;
    ptr=(int *)malloc(20*sizeof(int));
  ptr[19]=5;
  ptr[7]=7;
  ptr[28]=68;
printf("%d %d %d\n",ptr[19],ptr[7],ptr[28]);
     free(ptr);
    ptr=(int *)malloc(30*sizeof(int));
   // ptr[28]=67;
printf("%d %d %d\n",ptr[19],ptr[7],ptr[28]);
    free(ptr);
     return 0;
}

