#include<stdio.h>
int main()
{
    char c;
    int i,j,an=11,t=0,ab=1;
    float ar[5][12],s=0,av;
    scanf("%c",&c);
    for(i=0;i<5;i++)
    {
        for(j=0;j<12;j++)
            scanf("%f",&ar[i][j]);
    }
    for(i=0;i<5;i++)
    {
        for(j=ab;j<an;j++)
        {
            s=(s+ar[i][j]);
            printf("%d--",s);
            t=t+1;
        }
        an=an-1;
        ab=ab+1;
    }
    printf("t=%d s=%d\n",t,s);
    av=s/t;
    printf("%.1f\n",av);
    return 0;
}
