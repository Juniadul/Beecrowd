#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    if(x>y){
        cout<<"O JOGO DUROU "<<24-(x-y)<<" HORA(S)"<<endl;
    }
    if(x==y){
        cout<<"O JOGO DUROU "<<24-(x-y)<<" HORA(S)"<<endl;
    }
    if(x<y){
        cout<<"O JOGO DUROU "<<(y-x)<<" HORA(S)"<<endl;
    }
    
    return 0;
}