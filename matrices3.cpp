#include<iostream>
using namespace std;
int main (){
    int n,s=0,i,j;
    cout<<"Ingrese el odern de la matriz cuadrada: "; cin>>n;
    int matriz[n][3*n];
    for(int i=0;i<n;i++){
        for(int j=0;j<3*n;j++){
            if(i==0){
                matriz[i][j]=1;
            }
            else if(j==0){
                matriz[i][j]=1;
            }
            else if(j==(3*n-1)){
                matriz[i][j]=1;
            }
            else if(i==(n-1)){
                matriz[i][j]=1;
            } else{
                matriz[i][j]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<3*n;j++){
            cout<<matriz[i][j]<<" ";
        }
         cout<<"\n";
    }
    return 0;
}