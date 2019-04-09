#include<iostream>
using namespace std;
int main()
{
    int n,l=0,i;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        if(i==0)
            l=a[i];
        else
        {
            if(l<a[i])
                l=a[i];
        }
    }
    cout << l <<endl;
}
