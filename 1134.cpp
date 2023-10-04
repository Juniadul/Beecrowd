#include<iostream>
using namespace std;
int main(){
    int a,al=0,ga=0,di=0;
     while(true){
                cin >> a;
                if(a == 1){
                al++;
                }
                else if(a == 2){
                 ga++;
                }
                else if(a == 3){
                 di++;
                }
                else if(a == 4){
                 break;
                }
                else{

            continue;
                }
    }
    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << al << "\n";
    cout << "Gasolina: " << ga << "\n";
    cout << "Diesel: " << di << "\n";
    return 0;
}