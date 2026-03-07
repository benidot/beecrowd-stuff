#include <iostream>
using namespace std;

int main() {

    int cases; cin >> cases;

    for (int i = 0; i < cases; i++) {

        string a,b;
        cin >> a >> b;
        int al = a.length();
        int bl = b.length();
        int ab = al - bl;

        if (al < bl) {
            cout << "nao encaixa\n";
            continue;
        }

        bool er = false;

        for (int i = 0; i < b.length(); i++) {
            if (b[i] != a[i+ab]) {
                er = true;
                cout << "nao encaixa\n";
                break;
            }
        }

        if (!er) cout << "encaixa\n";

    }

}