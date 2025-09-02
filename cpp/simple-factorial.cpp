#include <iostream>
using namespace std;

int main() {

    int x;
    cin >> x;
    for (int i = x-1; i > 0; i--) {x *= i;}
    cout << x << endl;
    return 0;
    
}