#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
using namespace std;

int main() {
    float inp;
    float inpI;
    cin >> inp;
    float inpF = modf(inp, &inpI);
    int arr[7] = {0, 0, 0, 0, 0, 0, 0};
    int vals[7] = {100, 50, 20, 10, 5, 2, 1};
    float valsC[6] = {1, 0.5, 0.25, 0.10, 0.05, 0.01};
    
    cout << "NOTAS:\n";
    for (int i = 0; i < 7; i++) {
        while (inpI >= vals[i]) {inpI -= vals[i]; arr[i]++;}
    }
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " nota(s) de R$ " << vals[i] << ",00\n";
    }

    int arrC[6] = {0, 0, 0, 0, 0, 0};

    cout << "MOEDAS:\n";
    for (int i = 0; i < 6; i++) {
        while (inpF >= valsC[i]) {inpF -= valsC[i]; arrC[i]++;}
    }
    for (int i = 0; i < 6; i++) {
        cout << arrC[i] << " moeda(s) de R$ " << fixed << setprecision(2) << valsC[i] << "\n";
    }
}