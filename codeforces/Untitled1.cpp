#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,o=0;
    cin>>n>>m;
    int a[m*2];
    while(n>0){
            n--;
           int k=1;
    for(i=0;i<2*m;i++)
       {
           cin>>a[i];
           if(k==2){
        if(a[i]==1 || a[i-1]==1)
            o++;
            k=0;
           }
           k++;
    }
        }
    cout<<o<<endl;
}
