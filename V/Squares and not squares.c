#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int i,j,b;
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
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
    for(i=0;i<n;i++)
    {
        int p=sqrt(ar[i]);
       if (pow(p,p) != ar[i])
       {
        while()
        {
            if(ar[i])
        }
       }

    }
}
