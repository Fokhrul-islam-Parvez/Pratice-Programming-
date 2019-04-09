#include<stdio.h>
int main()
{
    int r,c,b=0,t=0,i,j,g,t1=0;
    scanf("%d %d",&r,&c);
    char n[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%c",&n[i][j]);
             scanf("%c",&n[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(n[i][j]!='.')
            {
                b=1;
                break;
            }
        }
        if(b==0)
            t++;
        b=0;
    }
    g=t*c;
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            if(n[j][i]!='_')
            {
                b=1;
                break;
            }
        }
        if(b==0)
            t1++;
        b=0;
    }
    g=g+(t1*r)-(t*t1);
    printf("%d\n",g);
}
