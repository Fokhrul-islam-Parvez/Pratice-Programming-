#include<iostream>
using namespace std;
int main()
{
    int n,m,a,b;
    cin >> n >> m;
    a=n/2;
    if(n%2!=0)
     {
         a++;
    if(a<m)
      b=m-1;
    if(a>m)
      b=m+1;
    if(a==m)
        b=m-1;
    if(n==1)
        b=1;
     }
     else
     {
          if(a<m)
      b=m-1;
    if(a>m)
      b=m+1;
    if(a==m)
        b=m+1;
    if(n==1)
        b=1;

     }
    cout << b << endl;
}
