#include<stdio.h>
int main()
{
    long long n,m;
    long long tot_ev,tot_od,tot;
    scanf("%I64d",&m);
    n=m;
    if(n%2!=0)
    {
        n=m-1;
    }
        tot_ev=(((2+n)/2)-1)*((2+n)/2);

    if(m%2==0)
    {
      n=m-1;
    }
    else
        n=m;

        tot_od=((n-1)/2)+1;
        tot_od=tot_od*tot_od;
        tot_od=-1*tot_od;
        tot=tot_ev+tot_od;
    printf("%I64d\n",tot);
    return 0;
}
