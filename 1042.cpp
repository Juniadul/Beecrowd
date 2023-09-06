#include<iostream>
using namespace std;

int main(){

    int a,b,c,temp,i,j,k;
    cin>>a>>b>>c;
    i=a;
    j=b;
    k=c;
    if(a>b){
        temp = a;
        a=b;
        b=temp;
        
    }
     if(a>c){
        temp = a;
        a=c;
        c=temp;
    }
     if(b>c){
        temp = b;
        b=c;
        c=temp;
    }
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<endl;
    cout<<i<<"\n"<<j<<"\n"<<k<<endl;
    return 0;

}