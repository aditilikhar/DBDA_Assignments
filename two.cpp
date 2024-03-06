#include<iostream>
using namespace std;
int main()
{
    int n,fact=1;
    cout<<"enter no: ";
    cin>>n;
    while(n>0)
    {
        fact *=n;
        n--;
    }
    cout<<fact;
    return 0;
}
