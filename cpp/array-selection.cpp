#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    const int N = 100;

    float array[N];

    for (int i = 0; i < N; i++) {
        float num;
        cin >> num;
        array[i] = num;
    }

    for (int i = 0; i < N; i++) {
        if (array[i] <= 10) {
            cout << fixed << setprecision(1) << "A[" << i << "] = " << array[i] << endl;
        }
    }

    return 0;
}
