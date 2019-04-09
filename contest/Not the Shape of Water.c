#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
    int i,j,n,m;
    scanf("%d %d",&n,&m);
    char a[n][m];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {   scanf("%c",&a[i][j]);
            scanf("%c",&a[i][j]);
        }
    }
    int c=0,k=0,r;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]=='#')
            {
                c++;
                if(k==1)
                    break;
            }


        }
        if(k==0)
       { r=c;
        k=1;
       c=0;
       }
    }
    //printf("c==%d r==%d",c,r);
    if(r==c+1)
        printf("Square\n");
    else
        printf("Rectangle\n");
    }
}
