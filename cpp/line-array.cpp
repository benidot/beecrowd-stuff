#include <iomanip>
#include <iostream>
using namespace std;

int main() {

    int line;
    char operation;
    float result = 0;
    float arr[12][12];

    cin >> line;
    cin >> operation;

    for (int i = 0; i < 12; i++) {

        for (int j = 0; j < 12; j++) {
            cin >> arr[i][j];
        }

    }

    for (int i = 0; i < 12; i++) {
        result += arr[line][i];
    }

    if (operation == 'M') {
        result = result / 12;
    }

    cout << fixed << setprecision(1) << result << endl;

    return 0;
}
