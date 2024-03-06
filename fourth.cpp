#include<iostream>
using namespace std;
int main(){
    int m1,m2,m3,m4,m5;
    cout<<"Enter 5 sub marks: ";
    cin>>m1>>m2>>m3>>m4>>m5;
    int total=(m1+m2+m3+m4+m5)/5;
    cout<<"Grade is: ";

    if(total>=90)
    cout<<"Ex";
    else if(total<90 && total>=80)
    cout<<"A";
    else if(total<80 && total>=70)
    cout<<"B";
    else if(total<70 && total>=60)
    cout<<"C";
    else cout<<"F";

    return 0;
}
