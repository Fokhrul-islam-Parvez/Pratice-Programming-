#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    int r=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    if(n==1)
        if(a[0]==0)
        r++;
    for(i=0;i<n-1;i++)
    {
        if(a[i]==0)
            r++;
        else if(a[i]==1 && a[i+1]==1)
            r++;
        else if(a[i]==2 && a[i+1]==2)
            r++;
       else if(a[i]==3)
        {
            if(i>0)
                if(a[i-1]==1)
                     if(i<n-1){
                         if(a[i+1]==2)
                             r++;
                             i++;
                     }
               else if(a[i-1]==2)
                     if(i<n-1){
                         if(a[i+1]==1)
                             r++;
                             i++;
                     }
        }

    }
    cout<<r<<endl;
}
