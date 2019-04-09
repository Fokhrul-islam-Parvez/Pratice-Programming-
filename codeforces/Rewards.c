#include<stdio.h>
int main()
{
    int c[3],tc=0,tm=0,m[3];
    int i,e=0;
    for(i=0;i<3;i++){
        scanf("%d",&c[i]);
        tc=tc+c[i];
    }
    if(tc>0)
    {
    if(tc%5!=0)
     e=1;
    tc=tc/5;
    tc=tc+e;
    e=0;
    }
     for(i=0;i<3;i++){
        scanf("%d",&m[i]);
        tm=tm+m[i];
     }
     if(tm>0)
    {
    if(tm%10!=0)
     e=1;
    tm=tm/10;
    tm=tm+e;
    e=0;
    }
    int s;
    scanf("%d",&s);
    if((tm+tc)==s||(tm+tc)<s)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
