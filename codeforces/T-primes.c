#include<stdio.h>
int main()
{
    int n;
    long long i,j,k,p,c=0;
    scanf("%d",&n);
     long long a[n];
    for(i=0;i<n;i++){
        scanf("%I64d",&a[i]);
    printf("%lld",a[i]);
    }
    for(j=0;j<n;j++)
    { p=1;
      c=0;
      i=a[j]/4;
      printf(" a= %d",i);
        for(i=1;i<=a[j]/4;i++)
        {
            if(a[j]%i==0){
                c++;
            }
        }
        if(c==2 || c==1)
        {
             printf("NO\n");
             continue;
        }

        for(k=2;k<c;k++)
        {
            if(c%k==0)
            {
                p=0;
                break;
            }
        }
        if(p==1)
            printf("YES\n");
        else

            printf("NO\n");
    }
    return 0;
}
