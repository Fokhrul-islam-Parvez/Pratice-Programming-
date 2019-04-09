#include<stdio.h>
int main()
{
    int c=0,b=0;
    int array[11]={1,2,3,4,5,6,7,8,9,10,11};
    int i,f,l,t=1,m;
    f=0;
    l=11-1;
    m=(f+l)/2;
    while(t=1)
    {
        if(array[m]==8)
        {
            break;
        }
        else
        {
            if(array[m]>8)
            {
                l=m-1;
                m=(l+f)/2;
            }
            else
            {
                f=m+1;
                m=(l+f)/2;
            }
        }
         c=c+1;
    }

    for(i=0;i<11;i++)
    {
        b++;
        if(array[i]==8)
        {
            break;
        }
    }
    if(c<b)
    {
        printf("linear Search is Better than Binary\n");
    }
    else
    {
         printf("Binary Search is Better than linear\n");
    }
    return 0;
}
