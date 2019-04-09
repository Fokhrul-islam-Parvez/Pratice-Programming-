#include<stdio.h>
int main()
{
    int i,j,b=0,w=0,ac;
    char c;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
           scanf("%c",&c);
            //scanf("%c",&ac);
            if(c=='Q')
                w=w+9;
            if(c=='q')
                b=b+9;
            if(c=='R')
                w=w+5;
            if(c=='r')
                b=b+5;
            if(c=='B')
                w=w+3;
            if(c=='b')
                b=b+3;
            if(c=='N')
                w=w+3;
            if(c=='n')
                b=b+3;
            if(c=='P')
                w=w+1;
            if(c=='p'){
                b=b+1;
            }
        }
    }
    printf("w=%d b=%d\n",w,b);
    if(w>b)
        printf("White\n");
    else if(w<b)
        printf("Black\n");
    else
        printf("Draw\n");
}
