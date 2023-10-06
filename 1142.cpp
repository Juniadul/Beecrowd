#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for( i = 0; i<n*4;){

        cout<<(i+1)<<" "<<(i+2)<<" "<<(i+3)<<" PUM\n";
        i+=4;
    
    }
    return 0;
}