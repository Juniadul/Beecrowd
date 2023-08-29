 #include<iostream>
 #include<iomanip>
    using namespace std;

    int main(){
        double a,b,c,avg=0;
        cin>>a>>b>>c;
        a=a*2;
        b=b*3;
        c=c*5;
        avg = (a+b+c)/(2+3+5);
        cout<<fixed;
        cout<<setprecision(1)<<"MEDIA = " <<avg<<endl;
                                       
        return 0;
    }                                                                                            
