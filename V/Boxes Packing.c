#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int i,j,b;
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
     for(i=0;i<n-1;i++)
    {
       for(j=0;j<n-1-i;j++)
       {
           if(ar[j]>ar[j+1])
           {
               b=ar[j];
               ar[j]=ar[j+1];
               ar[j+1]=b;
           }
       }
    }
    int p=n;
    for(i=0;i<n-1;i++)
    {
        if(ar[i]<ar[i+1])
        {
            c++;
        }
    }
    printf("%d\n",p-c);
}
