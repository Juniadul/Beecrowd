#include<iostream>
using namespace std;

int main(){
    double a,b,c,temp,i,j,k;
    cin>>a>>b>>c;
    if(a<b){
        temp = a;
        a=b;
        b=temp;
        
    }
     if(a<c){
        temp = a;
        a=c;
        c=temp;
    }
     if(b<c){
        temp = b;
        b=c;
        c=temp;
    }
    i=a*a;
    j=b*b;
    k=c*c;
    if(a>= b+c){
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    else{
       if(i == j+k){
        cout<<"TRIANGULO RETANGULO"<<endl;
       }
        if(i > j+k){
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
       }
        if(i < j+k){
        cout<<"TRIANGULO ACUTANGULO"<<endl;
       }
        if(i==j && j==k){
        cout<<"TRIANGULO EQUILATERO"<<endl;
       }
       if((a == b && a != c)  || (a == c && a != b) || (b == c && b != a))
            cout << "TRIANGULO ISOSCELES"<<endl;
    }

}