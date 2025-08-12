#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int N;
    cin >> N;

    float array[N];
    int lowest,position;

    for (int i = 0; i < N; i++) {
        float num;
        cin >> num;
        array[i] = num;
    }

    lowest = array[0];
    position = 0;

    for (int i = 0; i < N; i++) {
        if (lowest > array[i]) {
            lowest = array[i];
            position = i;
        }
    }

    cout << "Menor valor: " << lowest << endl << "Posicao: " << position << endl;

    return 0;
}
