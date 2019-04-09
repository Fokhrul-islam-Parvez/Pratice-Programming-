#include<stdio.h>
#include<stdio.h>
int main()

{
    int a,b;
    int x=1;
    while(x==1)
    {
        scanf("%d %d",&a,&b);
        if (a==0 || b==0)
            break;

         int c=0;

         c= ((int) sqrt(a-1));
        int d= (int) sqrt(b);
        printf("%d\n",(d-c));
    }
}
