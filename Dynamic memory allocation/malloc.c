#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=malloc(sizeof(int));
    printf("%d\n",ptr);
    *ptr=5;
    printf("%d\n",*ptr);
    free(ptr);
    printf("%d",ptr);
    return 0;
}
