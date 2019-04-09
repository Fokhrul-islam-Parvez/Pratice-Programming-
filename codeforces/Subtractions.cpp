#include<iostream>
#include <cmath>

using namespace std;
 long long n,t;
int check(int a1,int a2)
{
    t=t+a1/a2;
    a1=a1%a2;
    if(a1==0)
        return t;
     else
        check(a2,a1);
}
int main()
{
    cin>>n;
    int a,b,a1,a2;
    while(n>0)
    {
        cin>>a>>b;
        a1=fmax(a,b);
        a2=fmin(a,b);
        cout<<check(a1,a2)<<endl;
        n--;
        t=0;
    }
}
