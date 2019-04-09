#include <stdio.h>
int main()
{
    int m=16;
    int a[]={0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
    int b[m];
    int i,j;
    for(i=0;i<m;i++)
    {
        b[i]=1;
        for(j=0;j<i;j++)

        {
            if(a[j] < a[i])
            {
               if(b[j]>=b[i])
                b[i]=b[i]+1;
            }
        }
        printf("%d  ",b[i]);
    }
  int lis=b[0];
for(i=0;i<m;i++)
{
    if(b[i]>lis)
        lis=b[i];
}

printf("\nLis = %d\n",lis);
    return 0;
}
