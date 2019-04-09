#include<stdio.h>
int main()
{
    int n,i,c1,c=0,d=0,c2,c3,j,k=1;
    int p[3];
    scanf("%d",&n);
    for(i=0;i<3;i++)
        scanf("%d",&p[i]);
   for(i=0;i<3;i++)
   {
       if(n<p[i])
        continue;
       c1=n/p[i];
    if(n%p[i]!=0)
    {
            c3=n%p[i];
           c2=p[i]+(n%p[i]);
      for(j=0;j<3;j++)
        {
            if(j==i)
                continue;
            if(c3%p[j]==0)
                {
                c1=c1+(c3/p[j]);
                d=1;
                }
            else if(c2==p[j])
                d=1;
            else
            {
                while(c3>p[j])
                {
                    c4=c3/p[j];
                    c5=c3%p[j];
                    for(k=0;k<3;k++)
                    {
                        if((c5+p[j])==p[k])
                            c4=c4;
                            t=1;
                        else if(c5%p[k]==0)
                            c4=c4+(c5/p[k]);
                             t=1;
                    }
                    if(t==0)
                        {

                        }
                }
            }
        }
        if(d==0)
            c1=0;
    }
       if(c<c1)
       {
          c=c1;
       }
    d=0;
 }
    int s=0;
  if(p[0]+p[1]+p[2]==n)
          s=3;
  else if(p[0]+p[1]==n)
        s=2;
  else if(p[0]+p[2]==n)
        s=2;
  else if(p[1]+p[2]==n)
        s=2;

        if(c<s)
            printf("%d\n",s);
        else
            printf("%d\n",c);
    return 0;
}
