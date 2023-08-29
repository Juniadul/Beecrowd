#include<iostream>
using namespace std;

int main(){

    int n,temp;
    cin>>n;
    cout<<n/365<<" ano(s)"<<endl;
    temp = n%365;
    cout<<temp/30<<" mes(es)"<<endl;
    temp = temp%30;
    cout<<temp/1<<" dia(s)"<<endl;


    return 0;
}