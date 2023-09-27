#include<iostream>
using namespace std;

int main(){
    int i,start,end,sum;
    while(1){
        cin>>start>>end;
        if(start<=0 || end <=0){
            break;
        }
        if(start > end){
            i = start;
            start = end;
            end = i;
        }
        sum = 0;
        for(i = start; i <= end; i++){
            sum += i;
            cout<<i<<" ";
        }
        cout<<"Sum="<<sum<<endl;
    }
    return 0;
}