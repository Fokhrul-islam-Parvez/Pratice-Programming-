#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,x=1,t;
    while(x==1)
    {
        cin>>a>>b>>c;
        if(a==0)
            break;
        t=pow(a,2.0)+pow(b,2.0)- pow(c,2.0);;
        if(t==0)
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
    }
}
