#include <iostream>
using namespace std;

int main() {
    int inp;
    int arr[7] = {0, 0, 0, 0, 0, 0, 0};
    int vals[7] = {100, 50, 20, 10, 5, 2, 1};
    cin >> inp;
    cout << inp << endl;
    for (int i = 0; i < 7; i++) {
        while (inp >= vals[i]) {inp -= vals[i]; arr[i]++;}
    }
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " nota(s) de R$ " << vals[i] << ",00\n";
    }
}