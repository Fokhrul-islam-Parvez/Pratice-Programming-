#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i;
    ptr= (int *)malloc(4 * sizeof(int));
    ptr[1]=5;
    printf("%d\n",ptr[1]);
    ptr= (int *)realloc(ptr, 10 * sizeof(int)); ///array size 4 thaka 10 kora holo//
    ptr[14]=9;
    ptr[20]=20;
    for(i=0;i<10;i++)
        scanf("%d",&ptr[i]);
    printf("%d\n",ptr[1]);
    for(i=0;i<10;i++)
        printf("%d\n",ptr[i]);                        ///total array size 10//
    free(ptr);
    return 0;
}

