#include<stdio.h>
int main()
{
    int n,i=0,j=0,k=0,c0=0,c1=0,c2=0,b=0,b1=0,b12=0,b11=0,b2=0,b22=0,b21=0,t=0;
    scanf("%d",&n);
    int p[n];
    int k0[n],k1[n],k2[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(p[j]<p[j+1])
            {
                b=p[j];
                p[j]=p[j+1];
                p[j+1]=b;
            }
        }
    }
    for(i=0;i<n;i++)
    {

               if(p[i]%3==0)
                {
                     k0[c0]=p[i];
                      c0=c0+1;
                }

               if(p[i]%3==1)
               {
                   k1[c1]=p[i];
                    c1=c1+1;
               }
               if(p[i]%3==2)
               {
                   k2[c2]=p[i];
                   c2=c2+1;
               }
    }
    if(c0==0)
    {
    if(c1==0)
    {
        if(c2<3){
        printf("0");
        return 0;
        }
    }
    else if(c2==0)
    {
        if(c1<3){
        printf("0");
        return 0;
        }
    }
    }
    if(c1!=c2)
    {
        if((c1<c2) && (c1!=0)){
            t=c1;
            b2=c2-t;
            b21=b2/3;
            b22=b21*3;
        }
        else if((c2<c1) && (c2!=0)){
            t=c2;
            b1=c1-t;
            b11=b1/3;
            b12=b11*3;
        }
        else{
            if(c1>0)
            {
            t=0;
            b1=c1-t;
            b11=b1/3;
            b12=b11*3;
            }
            else if(c2>0)
            {
            t=0;
            b2=c2-t;
            b21=b2/3;
            b22=b21*3;
            }
        }
    }
    else
        t=c1;

     for(i=c0,j=0;j<t+b12;i++,j++)
     {
         k0[i]=k1[j];
     }
      for(i=i,j=0;j<t+b22;i++,j++)
     {
         k0[i]=k2[j];
     }
      for(k=0;k<i-1;k++)
    {
        for(j=0;j<i-1-k;j++)
        {
            if(k0[j]<k0[j+1])
            {
                b=k0[j];
                k0[j]=k0[j+1];
                k0[j+1]=b;
            }
        }
    }
      for(k=0;k<i;k++)
    {
        printf("%d",k0[k]);
    }
    printf("\n");
    return 0;
}
