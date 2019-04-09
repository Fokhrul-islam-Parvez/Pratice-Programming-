#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int p[n];
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    int p25=0;
    int p100=0;
    int p50=0,k=0;
    for(i=0;i<n;i++)
    {
        if(p[i]==25)
          p25++;
        else if(p[i]==50)
        {
            p25--;
            p50++;
        }
        else
        {
            if(p50>0){
                p50--;
                p25--;

            }
            else
                p25=p25-3;
            p100++;
        }
        if(p25<0 || p50<0){
            printf("NO\n");
            k=1;
        break;
        }
    }
    if(k==0)
        printf("YES\n");
}
