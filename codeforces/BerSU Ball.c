#include<stdio.h>
int main()
{
    int b,i,j,c=0,sml;
    scanf("%d",&b);
    int bs[b];
    for(i=0;i<b;i++)
        scanf("%d",&bs[i]);
        int g;
    scanf("%d",&g);
    int gs[g];
    for(i=0;i<g;i++)
        scanf("%d",&gs[i]);
    for(i=0;i<b-1;i++)
    {
        for(j=0;j<b-1-i;j++)
        {
            if(bs[j]>bs[j+1])
            {
                sml=bs[j+1];
                bs[j+1]=bs[j];
                bs[j]=sml;
            }
        }
    }
    for(i=0;i<g-1;i++)
    {
        for(j=0;j<g-1-i;j++)
        {
            if(gs[j]>gs[j+1])
            {
                sml=gs[j+1];
                gs[j+1]=gs[j];
                gs[j]=sml;
            }
        }
    }


    for(i=0;i<b;i++)
    {
        for(j=0;j<g;j++)
        {
            if(gs[j]==0)
                continue;
            if(bs[i]==gs[j])
            {
                c++;
                gs[j]=0;
                break;
            }
            else if(bs[i]-gs[j]==1 || bs[i]-gs[j]==-1)
            {
                 c++;
                gs[j]=0;
                break;
            }
        }
    }
    printf("%d\n",c);
}
