#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int c1,c2,n1,n2;
    float p1,p2,tp1,tp2,price;
    cin>>c1>>n1>>p1;
    cin>>c2>>n2>>p2;

    tp1 = n1*p1;
    tp2 = n2*p2;

    price = tp1+tp2;

    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<price<<endl;



    return 0;
}