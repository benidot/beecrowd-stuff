#include <iostream>
using namespace std;

int main() {

    int teaType;
    int winners = 0;
    cin >> teaType;

    for (int i = 0; i < 5; i++) {

        int attempt;
        cin >> attempt;
        if (attempt == teaType) {
            winners++;
        }

    }

    cout << winners << endl;

    return 0;
}