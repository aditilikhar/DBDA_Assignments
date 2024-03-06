#include<iostream>
using namespace std;
void count(string str)
{
    int upper=0,lower=0,numeric=0,other=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        upper++;
        else if(str[i]>='a' && str[i]<='z')
        lower++;
        else if(str[i]>='0' && str[i]<='9')
        numeric++;
        else
        other++;

    }
    cout<<"Upper: "<<upper<<endl;
    cout<<"Lower: "<<lower<<endl;
    cout<<"Numbers: "<<numeric<<endl;
    cout<<"special: "<<other<<endl; 
}
int main(){
    string str;
    cout<<"Enter here: ";
    cin>>str;
    count(str);

    return 0;
}
