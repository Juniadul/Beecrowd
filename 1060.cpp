#include<iostream>
using namespace std;

int main() {
    float a;
    int i, count = 0;
    for(i = 0; i < 6; i++) {
        cin >> a ;
        if(a > 0) {
            count++;
        }
    }
    cout << count << " valores positivos" << endl;
    return 0;
}
