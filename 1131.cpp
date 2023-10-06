#include <iostream>
using namespace std;

int main() {
    int a, b, m = 0, i = 0, g = 0, d = 0, t;

    while (true) {
        cin >> a >> b;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        m++;

        if (a > b) {
            i++;
        }
        else if (a < b) {
            g++;
        }
        else {
            d++;
        }

        cin >> t;

        if (t == 1) {
            continue;
        }
        else if (t == 2) {
            break;
        }
    }

    cout << m << " grenais" << endl;
    cout << "Inter:" << i << endl;
    cout << "Gremio:" << g << endl;
    cout << "Empates:" << d << endl;

    if (i > g) {
        cout << "Inter venceu mais" << endl;
    }
    else if (i < g) {
        cout << "Gremio venceu mais" << endl;
    }
    else {
        cout << "Não houve vencedor" << endl;
    }

    return 0;
}
