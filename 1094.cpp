#include <iostream>
#include<iomanip>


using namespace std;

int main(){
    int n;
    int q;
    char t;
    int total = 0;
    int coelho = 0;
    int sapo = 0;
    int rato = 0;
    
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
            cin >> q;
            cin >> t;
            
            total += q;
            
            if(t == 'C') coelho += q;
            if(t == 'S') sapo += q;
            if(t == 'R') rato += q;
    }
    
    cout << "Total: " << total << " cobaias"<<endl;
    cout << "Total de coelhos: " << coelho << endl;
    cout << "Total de ratos: " << rato <<endl;
    cout << "Total de sapos: " << sapo <<endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << (coelho * 100.0) / total << " %" << endl;
    cout << "Percentual de ratos: " << (rato * 100.0) / total << " %" << endl;
    cout << "Percentual de sapos: " << (sapo * 100.0) / total << " %" << endl;

    return 0;
    
}
 