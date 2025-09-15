#include <iostream>
#include <algorithm>
using namespace std;

struct nation {
    string name;
    int gold;
    int silver;
    int bronze;
};

bool order(const nation &a, const nation &b) {
    return (a.gold > b.gold) ||
           (a.gold == b.gold && a.silver > b.silver) ||
           (a.gold == b.gold && a.silver == b.silver && a.bronze > b.bronze) ||
           (a.gold == b.gold && a.silver == b.silver && a.bronze == b.bronze && a.name < b.name);

}


int main() {

    int N;
    cin >> N;
    nation nat[N];

    for (int i = 0; i < N; i++) {
        cin >> nat[i].name >> nat[i].gold >> nat[i].silver >> nat[i].bronze;
    }

    sort(nat, nat+N, order);

    //cout << endl;
    for (int i = 0; i < N; i++) {
        cout << nat[i].name << " " << nat[i].gold << " " << nat[i].silver << " " << nat[i].bronze << endl;
    }

    return 0;
}
