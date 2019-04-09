#include<stdio.h>
int main()
{
    int t,i,j,l;
    scanf("%d",&t);
    int b[t];
    char a[t][10];
    for(i=0;i<t;i++)
    {
        scanf("%s",a[i]);
        scanf("%d",&b[i]);
    }
     l=b[0];
    for(i=0;i<t;i++)
     {
        if(l>b[i])
           l=b[i];
    }
     for(i=0;i<t;i++)
     {
        if(b[i]==l)
        printf("Y\n");
        else
        printf("N\n");
     }
     return 0;
}
