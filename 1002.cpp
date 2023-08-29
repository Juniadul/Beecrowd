#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double A,n,R,AREA;
    n=3.14159;
    cin>>R;
    A=R*R;
    AREA = A*n;
    cout<<"A="<<fixed<<setprecision(4)<<AREA<<endl;
    return 0;
}