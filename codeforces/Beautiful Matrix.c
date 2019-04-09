#include<Stdio.h>
int main()
{
    int arr[5][5],i,j,k,l;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1)
                {
                    k=i;
                    l=j;
                }
        }
    }
    int a1=k-2;
    int a2=l-2;
    if(a1<0)
        a1=(-1)*(a1);
    if(a2<0)
        a2=(-1)*(a2);
    int a3=a1+a2;
    printf("%d\n",a3);
}
