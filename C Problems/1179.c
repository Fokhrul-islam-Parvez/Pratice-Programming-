#include<stdio.h>
int main()
{
    int a[15],par[5],impar[5],a1=0,b=0,i,j;
    for(i=0;i<15;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            par[a1]=a[i];
            a1++;
            if(a1==5)
            {
                for(j=0;j<5;j++)
                    printf("par[%d] = %d\n",j,par[j]);
                a1=0;
            }
        }
        if(a[i]%2!=0)
        {
            impar[b]=a[i];
            b++;
            if(b==5)
            {
                for(j=0;j<5;j++)
                    printf("impar[%d] = %d\n",j,impar[j]);

                b=0;
            }
        }

    }
    if(b!=5 && b!=0)
    {
    for(j=0;j<b;j++)
    printf("impar[%d] = %d\n",j,impar[j]);
    }
    if(a1!=5 && a1!=0)
    {
    for(j=0;j<a1;j++)
    printf("par[%d] = %d\n",j,par[j]);
    }
    return 0;
}
