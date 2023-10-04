#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int value;

    while (true) {
        float x, y;
        bool valid_x = false, valid_y = false;

        do {
            cin >> x;
            valid_x = (x >= 0 && x <= 10);
            if (!valid_x)
                cout << "nota invalida" << endl;
        } while (!valid_x);

        do {
            cin >> y;
            valid_y = (y >= 0 && y <= 10);
            if (!valid_y)
                cout << "nota invalida" << endl;
        } while (!valid_y);

        cout << "media = " << fixed << setprecision(2) << ((x + y) / 2) << endl;

        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> value;
        } while (value != 1 && value != 2);

        if (value == 2) {
            break;
        }
    }

    return 0;
}
