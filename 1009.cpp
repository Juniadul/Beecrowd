#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    char name[30];
    float s;
    double ts,tswb;
    cin>>name;
    cin>>s>>ts;
    tswb = s + (ts*15)/100;
    cout<<fixed;
    cout<<setprecision(2)<<"TOTAL = R$ "<<tswb<<endl;
    
    return 0;
} 