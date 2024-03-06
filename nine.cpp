#include <iostream>
using namespace std;

void toBinary(int n)
{
    int b[64],i=0;
    while(n>0){
        b[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<b[j];
    }
}

void toOctal(int n)
{
    int b[64],i=0;
    while(n>0){
        b[i]=n%8;
        n=n/8;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<b[j];
    }
}

void toHex(int n)
{
    char hexaDeciNum[100]; 
    int i = 0; 
    while (n != 0) { 
        
        int temp = 0; 
  
        temp = n % 16; 
  
        if (temp < 10) { 
            hexaDeciNum[i] = temp + 48; 
            i++; 
        } 
        else { 
            hexaDeciNum[i] = temp + 55; 
            i++; 
        } 
  
        n = n / 16; 
    } 
   
    for (int j = i - 1; j >= 0; j--) 
        cout << hexaDeciNum[j]; 
}
int main() {
   int n;
   cout<<"Enter decimal no: ";
   cin>>n;
   cout<<"Binary: "<<endl;
   toBinary(n);
   cout<<"Octal: "<<endl;
   toOctal(n);
   cout<<"Hexadecimal: "<<endl;
   toHex(n);
    return 0;
}
