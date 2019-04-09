#include<stdio.h>
int main()
{
    int n,i,j,c;
    scanf("%d",&n);
    int a1[n];
    int a2[n-1];
    int a3[n-2];
    int a4[n-1];
    long long a3t=0,a1t=0,a2t=0,t2,t3;
    for(i=0;i<n;i++){
        scanf("%d",&a1[i]);
        a1t=a1t+a1[i];

    }
    for(i=0;i<n-1;i++){
        scanf("%d",&a2[i]);
         a2t=a2t+a2[i];
    }
    for(i=0;i<n-2;i++){
        scanf("%d",&a3[i]);
         a3t=a3t+a3[i];
    }
    printf("%I64d\n",(a1t-a2t));
    printf("%I64d\n",(a2t-a3t));


     return 0;
}
