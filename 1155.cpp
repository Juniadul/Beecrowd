#include<iostream>
#include<iomanip>
using namespace std;

int main(){
   
   float s=1,i;
   for(i=2; i<=100; i++){
    s += 1/i;
   }
    cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}