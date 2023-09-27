#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float i,j;
    for(i=0; i<2.1; i+=0.2){
        for(j = 1; j<=3; j++){
            if((0<i && i<1) || (1<i && i<2)){
                cout<<fixed<<setprecision(1)<<"I="<<i<<" "<<"J="<<i+j<<endl;
            }
            else{
                cout<<"I="<<(int)i<<" "<<"J="<<(int)i+(int)j<<endl;
            }
        }
    }

    return 0;
}