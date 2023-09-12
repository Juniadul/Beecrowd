#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){
    int i;
    double sum=0,s=0;
    for(i =1; i<=39; i++){
        if(i%2!=0){
        sum += (i/pow(2,s));
        s++;
        }
    }
    cout<<fixed<<setprecision(2)<<sum<<endl;
}