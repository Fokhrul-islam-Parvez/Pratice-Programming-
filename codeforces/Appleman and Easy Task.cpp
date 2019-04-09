#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    char a[n];
    int i,j,e=0,k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >>a[j];
            if(a[j]=='x')
                e++;
        }
        if(e%2==0)
            e=0;
        else if(k==0)
            k=1;
    }
    if(k==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
