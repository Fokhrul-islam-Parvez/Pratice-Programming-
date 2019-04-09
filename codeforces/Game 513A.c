#include<stdio.h>
int main()
{
    int n1,n2,b[2],i,c1=1,c=1,j;
    scanf("%d %d %d %d",&n1,&n2,&b[0],&b[1]);
    while(c==1){
    for(i=0,j=1;i<2;i++,j--)
    {
        c=n1-b[i];
        c1=n2-b[j];
        if(c<=0 && i==0){
            printf("Second\n");
            break;
        }
        if(c<=0 && i==1){
            printf("First\n");
            break;
        }
        if(c1<=0 && j==1){
            printf("Second\n");
            break;
        }
        if(c1<=0 && j==0){
            printf("First\n");
            break;
        }
        }
          if(c<=0 || c1<=0)
            break;

    }
    return 0;
}
