#include<stdio.h>
int main()
{
    int n,m,i,j,o=0;
    scanf("%d %d",&n,&m);
    int a[m*2];
    while(n>0){
            n--;
           int k=1;
    for(i=0;i<2*m;i++)
       {
           scanf("%d",&a[i]);
           if(k==2){
        if(a[i]==1 || a[i-1]==1)
            o++;
            k=0;
           }
           k++;
    }
        }
    printf("%d\n",o);
}
