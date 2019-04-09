#include<stdio.h>
int main()
{
    int i,k=0;
    for(i=1;i<=40;i++)
    {
        if(k==0)
             printf("<<<<\n");

        printf("%d\n",i);
        k++;
        if(k==4)
        {
        printf(">>>>>\n");
        k=0;
        }

    }
}
