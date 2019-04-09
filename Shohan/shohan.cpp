#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter Your Number: "<<endl;
    cin>>number;
    if(80<=number && number==100)
    {
        cout<<"A+"<<endl;
    }
    else if(75<=number && number<=79)
    {
        cout<<"A"<<endl;
    }
     else if(70<=number && number<=74)
    {
        cout<<"A-"<<endl;
    }
     else if(65<=number && number<=69)
    {
        cout<<"B+"<<endl;
    }
     else if(60<=number && number<=64)
    {
        cout<<"B"<<endl;
    }
     else if(55<=number && number<=59)
    {
        cout<<"B-"<<endl;
    }
     else if(50<=number && number<=54)
    {
        cout<<"C+"<<endl;
    }
     else if(45<=number && number<=49)
    {
        cout<<"C"<<endl;
    }
     else if(40<=number && number<=44)
    {
        cout<<"C-"<<endl;
    }
     else if(40>number || number>100)
    {
        cout<<"Out of range"<<endl;
    }
}
