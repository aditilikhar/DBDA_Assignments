#include<iostream>
using namespace std;
int main(){
    int a[10][10],b[10][20],mul[10][10];
    int r,c,i,j,k;
    cout<<"Enter rows and cols: ";
    cin>>r>>c;
    cout<<"Enter first matrix: ";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter second matrix: ";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>b[i][j];
        }
    }
    cout<<"Matrix Multiplication: ";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            mul[i][j]=0;
            for(k=0;k<c;k++)
            {
                mul[i][j] += a[i][k]*b[k][i];
            }
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
}
