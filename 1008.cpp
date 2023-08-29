#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int a,n;
    float b,s;
    cin>>n;
    cin>>a>>b;
    s = a*b;
    cout<<"NUMBER = "<<n<<endl;
    cout<<fixed;
    cout<<setprecision(2)<<"SALARY = U$ "<<s<<endl;

}