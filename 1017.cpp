#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double a,b,fuel;
    cin>>a>>b;
    fuel = a*b/12;
    cout<<fixed<<setprecision(3)<<fuel<<endl;
    return 0;
}