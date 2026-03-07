#include <iostream>
using namespace std;

int main() {

    int a, k; cin >> a; k = 0;

    for (int i = 0; i < 5; i ++) {

        int t; cin >> t;
        if(t == a) k++;

    }

    cout << k << endl;

}