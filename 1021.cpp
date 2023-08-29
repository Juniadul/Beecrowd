#include <iostream>

using namespace std;

int main(){
    double N;
    int inteiro, temp, coin;

    while(cin >> N){

    inteiro = N;
    N = 100*N;
    coin = N;


    cout << "NOTAS:\n";

    cout << inteiro/100 << " nota(s) de R$ 100.00\n";
    temp = (inteiro%100);

    cout << temp/50 << " nota(s) de R$ 50.00\n";
    temp = (temp%50);

    cout << temp/20 << " nota(s) de R$ 20.00\n";
    temp = (temp%20);

    cout << temp/10 << " nota(s) de R$ 10.00\n";
    temp = (temp%10);

    cout << temp/5 << " nota(s) de R$ 5.00\n";
    temp = (temp%5);

    cout << temp/2 << " nota(s) de R$ 2.00\n";
    temp = (temp%2);

    cout << "MOEDAS:\n";
    cout << temp/1 << " moeda(s) de R$ 1.00\n";

    coin = coin%100;

    cout <<  coin/50 << " moeda(s) de R$ 0.50\n";
    coin = coin%50;

    cout <<  coin/25 << " moeda(s) de R$ 0.25\n";
    coin = coin%25;

    cout <<  coin/10 << " moeda(s) de R$ 0.10\n";
    coin = coin%10;

    cout <<  coin/5 << " moeda(s) de R$ 0.05\n";
    coin = coin%5;

    cout <<  coin/1 << " moeda(s) de R$ 0.01\n";
    }

    return 0;
}