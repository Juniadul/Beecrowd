#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    double a,b,avg=0;
    cin>>a>>b;
    a=a*3.5;
    b=b*7.5;
    avg =(a+b)/(3.5+7.5);
    cout<<fixed;
    cout<<setprecision(5)<<"MEDIA = "<<avg<<endl;
}