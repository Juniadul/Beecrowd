#include<iostream>
using namespace std;

int main(){
    int n,i,sum;
    cin>>n;
    while(n--){
        sum=0;
        int x,y;
        cin>>x>>y;
        if(x%2==0){
            x++;
        }
        for(i=0; i<y; i++){
            sum += x;
            x += 2;
        }
       cout<<sum<<endl;
    }
    return 0;
}