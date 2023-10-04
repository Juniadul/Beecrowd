#include<iostream>
using namespace std;
int main(){
    int a,al=0,ga=0,di=0;
    while(true){
        cin>>a;
        switch(a){
            case 1 : 
            al++;
            break;
            case 2 : 
            ga++;
            break;
            case 3 : 
            di++;
            break;
            case 4 : 
            break;
            default :
            break;
        }
        if( a ==4 ){
            break;
        }
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<al<<endl;
    cout<<"Gasolina: "<<ga<<endl;
    cout<<"Diesel: "<<di<<endl;
}