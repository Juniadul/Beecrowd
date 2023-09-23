#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a,b,s;
    int p;
    char c = '%';
    cin>>a;
    if(a>=0.00 && a<=400.00){
        b = (a*15)/100;
        s = a+b;
        p=15;
    }
    if(a>=400.01 && a<=800.00){
        b = (a*12)/100;
        s = a+b;
        p=12;
    }
    if(a>=800.01 && a<=1200.00){
        b = (a*10)/100;
        s = a+b;
        p=10;
    }
    if(a>=1200.01 && a<=2000.00){
        b = (a*7)/100;
        s = a+b;
        p=7;
    }
    if(a>=2000.01){
        b = (a*4)/100;
        s = a+b;
        p=4;
    }
    cout<<fixed<<setprecision(2);
    cout<<"Novo salario: "<<s<<endl;
    cout<<"Reajuste ganho: "<<b<<endl;
    cout<<"Em percentual: "<<p<<" "<<c<<endl;

    return 0;

}

