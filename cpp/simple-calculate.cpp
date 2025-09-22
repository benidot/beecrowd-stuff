#include <iomanip>
#include <iostream>
using namespace std;


int main() {

    float total = 0;
    for (int i = 0; i < 2; i++) {
        int code,quantity;
        float price;
        cin >> code >> quantity >> price;
        total += (price * quantity);
    }

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}
