#include<stdio.h>
int main()
{

    long long k,a,ae,ae1,ao,ao1,ao2,m;
    scanf("%I64d",&a);
    scanf("%I64d",&k);
    int odd[5]={9,1,3,5,7};
    int even[5]={10,2,4,6,8};
    m=a/2;
    int x=0;
    if(a%2!=0)
        m=m+1;
    if(k<=m)
    {
        ao=k%5;
        ao2=k/5;
         if(ao==0)
                x=1;
       ae1=odd[ao]+(10*(ao2-x));
    }
    else
    {
        k=k-m;
         ao=k%5;
        ao2=k/5;
        if(ao==0)
            x=1;
       ae1=even[ao]+(10*(ao2-x));
    }
    printf("%I64d\n",ae1);
 return 0;
}
