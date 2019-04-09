#include<stdio.h>
int main()
{
    int s,v1,v2,t1,t2;
    long long a,b;
    scanf("%d %d %d %d %d",&s,&v1,&v2,&t1,&t2);
    a=s*v1+(2*t1);
    b=s*v2+(2*t2);
    if(a<b)
        printf("First\n");
    else if(a>b)
        printf("Second\n");
    else
        printf("Friendship\n");
}
