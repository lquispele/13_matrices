#include<iostream>
using namespace std;
int main (){
    int n,St=0,sse=0,ssem[5];
    string dias[7]={"(L)","(M)","(M)","(J)","(V)","(S)","(D)"};
    double matriz[10][10];
    for(int j=1;j<=4;j++){
       cout<<"Ingrese los datos de la semana "<<j<<endl;
        for(int i=1;i<=7;i++){
            cin>>matriz[i][j];
            sse=sse+matriz[i][j]; 
        }
        ssem[j-1]=sse;
        St+=sse;
        sse=0;
    }
    cout<<"Ventas de cuatro semanas \n ";
    cout<<"-------------------------------------------------"<<endl;
    cout<<"\t SEM1 \t SEM2 \t SEM3 \t SEM4 "<<endl;
        for(int i=1;i<=7;i++){
            cout<<"   "<<dias[i-1];
            for(int j=1;j<=4;j++){
            cout<<"\t  "<<matriz[i][j];
            }
            cout<<"\n";
             }
    cout<<"-------------------------------------------------"<<endl;
    for(int i=1;i<5;i++){
        cout<<"\t  "<<ssem[i-1];  
    }
   cout<<"\nVenta total del mes: \t"<<St<<endl;
}