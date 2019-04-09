#include<iostream>
using namespace std;
int main()
{
    int n,i,d,ta=0,tb=0,d1,c=0;
    cin >> n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i] >> b[i];
        ta=ta+a[i];
        tb=tb+b[i];
    }
    d=ta-tb;
    if(d<0)
        d=-1*d;
    for(i=0;i<n;i++)
    {
        ta=ta-a[i];
        tb=tb-b[i];
        ta=ta+b[i];
        tb=tb+a[i];
        d1=ta-tb;
      if(d1<0)
        d1=d1*(-1);
      if(d<d1)
      {
      d=d1;
      c=i+1;
      }
        ta=ta-b[i];
        ta=ta+a[i];
        tb=tb-a[i];
        tb=tb+b[i];

    }
    cout << c << endl;
}
