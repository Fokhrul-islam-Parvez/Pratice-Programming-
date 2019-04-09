#include<stdio.h>
int main()
{
    int n,p=1,i;
    while(p==1){
    scanf("%d",&n);
        i=n%5;
       if(i==1)
        printf("Sheldon\n");
    else if(i==2)
        printf("Leonard\n");
    else if(i==3)
        printf("Penny\n");
    else if(i==4)
        printf("Rajesh\n");
    else if(i==0)
        printf("Howard\n");
}
}
