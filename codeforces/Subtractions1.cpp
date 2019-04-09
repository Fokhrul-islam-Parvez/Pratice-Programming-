#include<iostream>
#include <cmath>
using namespace std;
int main()
{  long long n,t=0,t1;
    cin>>n;
    int a,b,a1,a2;
    while(n>0)
    {
        cin>>a>>b;
        a1=fmax(a,b);
        a2=fmin(a,b);
        while(a2>0)
        {
            t=t+a1/a2;
            t1=a1%a2;
            a1=a2;
            a2=t1;
        }
        cout<<t<<endl;
        n--;
        t=0;
    }
}

