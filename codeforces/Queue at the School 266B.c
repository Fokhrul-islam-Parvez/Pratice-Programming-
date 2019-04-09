#include<stdio.h>
int main()
{
    int m,n,k=0,i,t;
    scanf("%d",&m);
    scanf("%d",&n);
    char ar[m];
    char ar2[m];
    scanf("%s",ar);
     if(m!=1){
    for(t=0;t<n;t++){
    for(i=0;i<m;i++)
    {
        if(ar[i]=='B' && ar[i+1]=='G')
            {
                ar2[i]='G';
                ar2[i+1]='B';
                k=1;
            }
        else
        {
            if(k==0)
            {
                ar2[i]=ar[i];
                 ar2[i+1]=ar[i+1];
            }
            else
            {
                ar2[i+1]=ar[i+1];
            }
        }
    }
    for(i=0;i<m;i++)
        ar[i]=ar2[i];
    }
     }
    if(m==1)
       ar2[0]=ar[0];
      printf("%s \n",ar2);

}
