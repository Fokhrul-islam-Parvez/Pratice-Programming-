#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Please enter 1st array size: ");
    int m;
    scanf("%d",&m);
    char a[m];
    printf("%d\n",m);
     printf("Please enter 1st String ( must be Character ): \n");
     scanf("%s",a);
    printf("Please enter 2nd array size: ");
    int n;
    scanf("%d",&n);
    char b[n];
     printf("Please enter 2nd Satring ( must be Character ) : \n");
     scanf("%s",b);
    int c[m+1];
    int d[m+1];
     for(k=0;k<m+1;k++)
     {
        c[k]=0;
        d[k]=0;
        printf("%d ",d[k]);
     }
      printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[j]==b[i])
            {
                d[j+1]=c[j]+1;
            }
            else
            {
                if(c[j+1]>d[j])
                    d[j+1]=c[j+1];
                else
                    d[j+1]=d[j];
            }
        }
        for(k=0;k<m+1;k++){
            printf("%d ",d[k]);
          c[k]=d[k];
            d[k]=0;
        }
         printf("\n");
    }
    return 0;
}

