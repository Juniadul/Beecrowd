#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    float sum = 0, div = 0;
    while(1){
        cin>>n;
        if(n<0) break;
            sum +=n;
            div+=1;
        }
 
        cout<<fixed<<setprecision(2)<<sum/div<<endl;
        return 0;
}