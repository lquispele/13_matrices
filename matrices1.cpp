#include<iostream>
using namespace std;
int main (){
    int n,s=0;
    cout<<"Ingrese el odern de la matriz cuadrada: "; cin>>n;
    int matriz[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"["<<i+1<<"]"<<"["<<j+1<<"]"; cin>>matriz[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
            s+=matriz[i][j];   
            }
        }
    }
    cout<<s<<endl;
    return 0;
}