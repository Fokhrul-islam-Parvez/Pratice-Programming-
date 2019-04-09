#include<stdio.h>
int main()
{
    int n,s,t1=0,t2=0,t3=0,t4=0;
    scanf("%d %d",&n,&s);
    int i;
    int h[n],m[n];
    int mm[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&h[i],&m[i]);
        mm[i]=h[i]*60+m[i];
    }
    if(mm[0]>=s+1)
    {
        printf("0 0\n");
        return;
    }
    for(i=0;i<n-1;i++)
    {
      t1=mm[i+1]-mm[i]-2;
      if(t1>=s*2)
      {
         t2=mm[i]+1+s;
         t3=t2/60;
         t4=t2%60;
         printf("%d %d\n",t3,t4);
         break;
      }
    }
    if(t2==0)
    {
        t2=mm[n-1]+s+1;
        t3=t2/60;
        t4=t2%60;
        printf("%d %d\n",t3,t4);
    }

}
