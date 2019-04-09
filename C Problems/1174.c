#include<stdio.h>
int main()
{
    float ar[10];
    int i;
    for(i=0;i<10;i++)
        scanf("%f",&ar[i]);

    for(i=0;i<10;i++)
        {
      if(ar[i]>10)
        continue;
      printf("A[%d] = %.1f\n",i,ar[i]);
        }
    return 0;
}
