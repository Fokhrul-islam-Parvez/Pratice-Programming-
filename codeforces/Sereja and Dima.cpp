#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int s=0,d=0,k=1;
    for(i=0,j=n-1;i<=j;i++,j--)
    {
        if(k==1)
       {
           if(a[i]<a[j]){
             s=s+a[j];
             i--;
           }
           else{
            s=s+a[i];
            j++;
        }
        k=0;
            }
        else
        {
        if(a[i]<a[j]){
            d=d+a[j];
            i--;
        }
        else{
            d=d+a[i];
            j++;
        }

        k=1;
        }

    }
    cout<<s<<" "<<d<<endl;
}
