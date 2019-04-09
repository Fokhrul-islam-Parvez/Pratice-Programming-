#include<stdio.h>
int main(){
    int x,t,i,a;
    while(scanf("%d",&t)!=EOF ){
        a= 0;
        for( x=0;x<5;x++){
            scanf("%d",&i);
            if(i==t)
                a++;
        }
        printf("%d\n", a);
    }
return 0;
}
