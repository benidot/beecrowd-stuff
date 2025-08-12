#include <iostream>
using namespace std;

int main() {

    const int N = 10;

    int array[N];

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        if (num <= 0) {
            array[i] = 1;
        } else {
            array[i] = num;
        }
    }

    for (int i = 0; i < N; i++) {
        cout << "X[" << i << "] = " << array[i] << endl;
    }

    return 0;
}
