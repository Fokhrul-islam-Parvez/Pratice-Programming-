#include<iostream>
#include <iomanip>
#include <locale>
#include <sstream>
#include <string>
using namespace std;
int c=-1,d=-1,e=-1,f=-1,t,g=0;
int ret(int a, int b)
{
    if(a==0)
    {
        a=1;
        c=a*b;
        a=0;
    }
    else if(a==1)
    {
        a=0;
        c=a*b;
        a=1;
    }
    if(b==0)
    {
        b=1;
        d=a*b;
        b=0;
    }
    else if(b==1)
    {
        b=0;
        d=a*b;
        b=1;
    }
    if(c==1 || d==1)
        return 1;
    else
        return 0;
}
int main()
{
    int a,b;
    string Result="";
    cin>>a>>b;
    while(a!=0 || b!=0)
    {
        g++;
       e=a%2;
       a=a/2;
       f=b%2;
       b=b/2;
        ostringstream convert;
        convert << ret(e,f);
        Result = convert.str()+Result;


    }
    std::cout << Result << std::endl;
    string st="1111";
    t=stoi( st);
   cout<<t<<" g="<<g<<endl;
}
