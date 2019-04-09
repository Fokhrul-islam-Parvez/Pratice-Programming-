#include<iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,s,c;
    cin>>n;
    int a[n];
     long long int64_t,t3=0,t2=0,t=0,t4=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0)
            t2=t2+abs(a[i]);
        else
            t3=t3+a[i];
    }
    t=((n)*(n+1))/2;
    t4=t3-t2;
    t=abs(t-t4);
    cout<<t<<endl;
}
