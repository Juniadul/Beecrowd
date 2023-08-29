#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float R;
    double V;
    cin>>R;
    V=(4/3.0)*3.14159*R*R*R;
    cout<<fixed<<setprecision(3)<<"VOLUME = "<<V<<endl;
    return 0;
}