#include <iomanip>
#include <iostream>
using namespace std;

int main() {

    int empNum,hrs;
    float salary;

    cin >> empNum >> hrs >> salary;
    cout << fixed << setprecision(2) << "NUMBER = " << empNum << "\nSALARY = U$ " << hrs * salary << endl;

    return 0;
}
