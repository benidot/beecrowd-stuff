#include <iostream>
#include <algorithm>
using namespace std;

struct kid {
  char isN;
  string name;
};

bool order(const kid &a, const kid &b) {
    return (a.name < b.name);
}

int main() {

    int N;
    int naughties = 0;
    int nices = 0;
    cin >> N;
    kid kids[N];

    for (int i = 0 ; i < N ; i++) {
        cin >> kids[i].isN >> kids[i].name;
        if (kids[i].isN == '+') {
            nices += 1;
        }
        else if (kids[i].isN == '-'){
            naughties += 1;
        }
    }

    sort(kids, kids+N, order);

    for (int i = 0 ; i < N; i++) {
        cout << kids[i].name << endl;
    }

    cout << "Se comportaram: " << nices << " | Nao se comportaram: " << naughties << endl;

    return 0;
}
