#include <iostream>
using namespace std;

int main() {

    int sh,sm,eh,em, s, e; cin >> sh >> sm >> eh >> em;

    s = sh * 60 + sm;
    e = eh * 60 + em;

    if (e <= s) e += 24 * 60;

    int d = e - s;

    int fh = d / 60;
    int fm = d % 60;

    cout << "O JOGO DUROU " << fh << " HORA(S) E " << fm << " MINUTO(S)\n";


}