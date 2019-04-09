#include<stdio.h>
int main()
{
    int n,i,c;
    scanf("%d",&n);
    int a[n],p=0,k=0;
    for(i=0;i<n;i++)
        {scanf("%d",&a[i]);
        if(a[i]==5)
            p++;
        else
            k++;
        }
    if(p>=9 && k!=0){
        c=p%9;
    if(c==0)
        p=p;
    else
        p=p-c;
    for(i=0;i<p;i++)
        printf("5");
    for(i=0;i<k;i++)
        printf("0");
    printf("\n");
    }
    else if(k!=0)
         printf("0\n");
    else
         printf("-1\n");
}
