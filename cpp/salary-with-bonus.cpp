#include <iomanip>
#include <iostream>
using namespace std;

int main() {

    float salary,sales;
    string name;
    cin >> name >> salary >> sales;
    cout << fixed << setprecision(2) << "TOTAL = R$ " << salary + (sales * 0.15) << endl;

    return 0;
}
