#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    double a,b,c,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    cin>>a>>b>>c;
    TRIANGULO = (a * c) / 2;
    CIRCULO =  c * c * 3.14159;
    TRAPEZIO = ((a + b) / 2) * c;
    QUADRADO = b * b;
    RETANGULO = a*b;
    cout<<fixed<<setprecision(3);
   cout<<"TRIANGULO: "<<TRIANGULO<<endl;
    cout<<"CIRCULO: "<<CIRCULO<<endl;
    cout<<"TRAPEZIO: "<<TRAPEZIO<<endl;
    cout<<"QUADRADO: "<<QUADRADO<<endl;
    cout<<"RETANGULO: "<<RETANGULO<<endl;






    
    return 0;
}