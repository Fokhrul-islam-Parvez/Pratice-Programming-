#include<stdio.h>
int  main()
{
    int b,s,n,m,c=0;
    scanf("%d %d",&n,&m);
   if(n>m)
    b=n;
   if(m>n)
    b=m;
   if(n<m)
    s=n;
   if(m<n)
    s=m;
   if(m==n)
   {
       s=m;
       b=n;
   }
   do{
        if(b>2)
        {
            s=s+1;
            b=b-2;
        }
        else if(s>2)
        {
            s=s-2;
            b=b+1;
        }
        else if(s==2 && b==2)
        {
            s=s-2;
            b=b+1;
        }
        else
        {
            b=b-2;
            s=s+1;
        }
        c++;
   }
    while(b>0 && s>0);
    if(n==1&&m==1)
        c=0;
  printf("%d\n",c);
}
