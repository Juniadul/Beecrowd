#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double x,y;
    cin>>x>>y;
    if(x==1){
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<4.00*y<<endl;

    }
     if(x==2){
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<4.50*y<<endl;

    }
     if(x==3){
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<5.00*y<<endl;

    }
     if(x==4){
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<2.00*y<<endl;

    }
     if(x==5){
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<1.50*y<<endl;

    }
    
    return 0;
}