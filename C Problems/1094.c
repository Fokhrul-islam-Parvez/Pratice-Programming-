#include<stdio.h>
int main()
{
    int b,ts=0,tr=0,tc=0,i,t=0;
    float ca,sa,ra;
    scanf("%d",&b);
    int a[15];
    char ac[15];
   // for(i=0;i<b;i++)
  //      scanf("%d %c",&a[i],&ac[i]);
 // }
     //for(i=0;i<b;i++)
   // {
     //    t=t+a[i];
    //    if(ac[i]=='C')
     //        tc=tc+a[i];
      //  else if(ac[i]=='S')
     //        ts=ts+a[i];
     //    else
    //        tr=tr+a[i];
    // }
     //ca=(tc*100.00)/t;
     //sa=(ts*100.00)/t;
    // ra=(tr*100.00)/t;
     printf("Total: %d cobaias\n",t);
     printf("Total de coelhos: %d\n",tc);
     printf("Total de ratos: %d\n",tr);
     printf("Total de sapos: %d\n",ts);
     printf("Percentual de coelhos: %.2f %%\n",ca);
     printf("Percentual de coelhos: %.2f %%\n",ra);
     printf("Percentual de sapos: %.2f %%\n",sa);
     return 0;
}

