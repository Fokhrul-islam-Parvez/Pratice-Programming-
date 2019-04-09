#include<iostream>
#include<cmath>
#include <cstdlib>
using namespace std;
int main()
{
    double x=11.5;
    int a=llrint(x);
    cout<<a<<endl;
     int b=25;
     a=remainder(b,a);
    cout<<a<<endl;
    int c=-20;
    a=copysign(b,c);
     cout<<a<<endl;
    a=abs(c);
    cout<<a<<endl;
    a=10;
    a=fdim(b,a);
     cout<<a<<endl;
     a=10;
    a=fdim(a,b);
    cout<<a<<endl;
    a=fmin(b,c);
     cout<<a<<endl;
      a=fmax(b,c);
    cout<<a<<endl;
    int d=2,e=4;
    float f=hypot(d,e);
     cout<<f<<endl;
     // cstdlib Library Start
     char ns[]="1997piuyytr";
     char *ce;
     int n=strtod(ns,&ce);
     cout<<n<<endl<<ce<<endl;
}
