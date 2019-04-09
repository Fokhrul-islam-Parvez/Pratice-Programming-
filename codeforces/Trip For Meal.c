#include<stdio.h>
int main()
{
    int n,a,b,c,t=0,r=1,o=0,e=0,i;
    scanf("%d %d %d %d",&n,&a,&b,&c);
    for(i=0;i<n-1;i++)
    {
        if(r==1)
            {
        if(a>=b)
        {
         t=t+b;
         e=1;
         r=0;
        }
        else if(a<b)
         {
            t=t+a;
            o=1;
            r=0;
         }
        }
        else if(e==1)
        {
            if(c>=b)
            {
                t=t+b;
                r=1;
                e=0;
            }
            else if(c<b)
            {
                t=t+c;
                o=1;
                e=0;
            }
        }
        else if(o==1)
        {
            if(c>=a)
            {
                t=t+a;
                r=1;
                o=0;
            }
            else if(c<a)
            {
                t=t+c;
                e=1;
                o=0;
            }
        }
    }
    printf("%d\n",t);
}
