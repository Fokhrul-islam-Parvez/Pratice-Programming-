#include<stdio.h>
int main()
{
    int a,b;
    double big;
    scanf("%d %d",&a,&b);
    int i,j,n;
    int p[a];
    for(i=0;i<a;i++)
        scanf("%d",&p[i]);
    for(i=0;i<a;i++)
    {
        for(j=0;j<a-i-1;j++)
        {
            if(p[j]>p[j+1])
            {
                n=p[j];
                p[j]=p[j+1];
                p[j+1]=n;
            }
        }
    }
    double a1,b3=0.0;
    double b1=p[0]-0;
    double b2=b-p[a-1];
    for(i=0;i<a-1;i++)
    {
       a1=p[i+1]-p[i];
       if(b3<a1)
           b3=a1;


    }
    b3=b3/2;
    if(b1>b2)
    {
        if(b1>b3)
            big=b1;
        else
            big=b3;
    }
    else
    {
        if(b2>b3)
            big=b2;
        else
            big=b3;
    }
    printf("%.10f\n",big);
}
