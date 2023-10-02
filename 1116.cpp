#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        float x,y;
        cin>>x>>y;
        if(y==0){
            cout<<"divisao impossivel"<<endl;
        }
        else{
        cout<<fixed<<setprecision(1)<<x/y<<endl;
    }
    }
    return 0;
}