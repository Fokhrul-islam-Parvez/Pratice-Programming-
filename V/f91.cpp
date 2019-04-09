#include<iostream>
using namespace std;
int f91(int n)
       {
           if(n<=100)
             f91(f91(n+11));
           if(n>=101)
            return n-10;
       }
int main()
{
    int x=1,n=0;
    while(x>0)
    {
        cin >> n;
        if(n==0)
            break;
        int m=n;
       int a=f91(n);
       cout<<"f91("<<m<<")"<<" = "<<a<<endl;

    }
}
