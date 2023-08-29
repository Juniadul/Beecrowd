#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
        double x1,y1,x2,y2,D=0;

        cin>>x1>>y1;
        cin>>x2>>y2;

        D=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        cout<<fixed<<setprecision(4);
        cout<<D<<endl;
        return 0;
}