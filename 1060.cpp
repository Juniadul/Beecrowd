#include<iostream>
using namespace std;
int main(){
    int i, count = 0;
    float a;

    for(i = 0; i<6; i++ ){
        cin>>a;
        if (a>0){
            count ++;
        }
    }
    cout<<count<<" valores positivos"<<endl;
}









