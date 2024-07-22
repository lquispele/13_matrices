#include<iostream>
using namespace std;
int main (){
    int n,s=0,i,j;
    cout<<"Ingrese el orden de la matriz cuadrada: "; cin>>n;
    int matriz[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"["<<i+1<<"]"<<"["<<j+1<<"]"; cin>>matriz[i][j];
        }
    }
    i=n;
    j=0;
        while(i>0&&j>=0){
            cout<<i<<"   "<<j+1<<endl;
            s+=matriz[i-1][j];  
            i--;
            j++;
        }
    cout<<s<<endl;
    return 0;
}