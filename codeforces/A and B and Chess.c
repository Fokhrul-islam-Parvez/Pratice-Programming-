#include<stdio.h>
int main()
{
    int i,j,w=0,b=0;
    char c[8];
    for(i=0;i<8;i++)
    {
            scanf("%c",&c[i]);
            scanf("%c",&c[i]);
                if(c[i][j]=='Q')
                {
                    w=w+9;
                    printf("w=%d\n",w);
                }
                if(c[i][j]=='q')
                {

                    b=b+9;
                    printf("b=%d\n",b);
        }
                if(c[i][j]=='R'){
                    w=w+5;
                     printf("w=%d\n",w);
                }
                 if(c[i][j]=='r')
                 {
                    b=b+5;
                    printf("b=%d\n",b);
                 }
                if(c[i][j]=='B')
                    w=w+3;
                if(c[i][j]=='b')
                    b=b+3;
                if(c[i][j]=='N')
                    w=w+3;
                if(c[i][j]=='n')
                    b=b+3;
                if(c[i][j]=='P')
                    w=w+1;
                 if(c[i][j]=='p')
                    b=b+1;
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
