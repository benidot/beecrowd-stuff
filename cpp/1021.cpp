#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double inp;
    cin >> inp;

    int cents = round(inp * 100);

    int notes[6] = {10000, 5000, 2000, 1000, 500, 200};
    int coins[6] = {100, 50, 25, 10, 5, 1};

    cout << "NOTAS:\n";
    for (int i = 0; i < 6; i++) {
        int k = cents / notes[i];
        cents %= notes[i];
        cout << k << " nota(s) de R$ " << notes[i] / 100 << ".00\n";
    }

    cout << "MOEDAS:\n";
    for (int i = 0; i < 6; i++) {
        int k = cents / coins[i];
        cents %= coins[i];
        cout << k << " moeda(s) de R$ " << fixed << setprecision(2) << coins[i] / 100.0 << "\n";
    }
}