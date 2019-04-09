#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p[n];
    double tot=0.0;
    int i,c=0;
    for(i=0;i<n;i++)
      scanf("%d",&p[i]);
    for(i=0;i<n;i++){
            if(p[i]==0)
            continue;
        double d=100.00/p[i];
         tot=tot+(1.0/d);
    }
    tot=(tot/n)*100;
    printf("%.12f\n",tot);
}
