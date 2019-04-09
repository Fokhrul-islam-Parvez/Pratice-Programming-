#include<stdio.h>
int main()
{
    int a,b,x=1;
    while(x==1){
    scanf("%d %d",&a,&b);
    if(a==0 && b==0)
        break;
        int t,t1,i,j;
        a--;
        for(j=1;;j++)
         {
             t=a/j;
             if(t<j)
             {
                 j--;
                 break;
             }
         }
         for(i=1;;i++)
         {
             t=b/i;
             if(t<i)
             {
                 i--;
                 break;
             }
         }
         printf("%d\n",i-j);
    }

}
