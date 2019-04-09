#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int i=0,j,sum=0;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    int ans=sum;
    int k=0,a1=0;
    for(i=0;i<5-1;i++)
    {
        for(j=0;j<5-1-i;j++)
        {
            if(a[j]<a[j+1])
            {
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        if(a[i]==a[i+1])
        {
            if(a[i+2]==a[i])
            {
                i=i+2;
                a1=sum-3*a[i];
            }
            else
            {
                 i=i+1;
                a1=sum-2*a[i];
            }
            if(ans>a1)
                ans=a1;
        }
    }
    cout<<ans<<endl;
}
