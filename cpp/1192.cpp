#include <iostream>
#include <string>
using namespace std;

int main() {

    int cases; cin >> cases;

    for (int i = 0; i < cases; i++) {

        string th; cin >> th;

        char sx = th[0];
        char fun = th[1];
        char sy = th[2];

        int x = sx - '0';
        int y = sy - '0';

        int res;

        res = x + y;

        if (isupper(fun)) {
            res = y - x;
        }

        if (x == y) {
            res = x * y;
        }

        cout << res << endl;

    }

    return 0;
}