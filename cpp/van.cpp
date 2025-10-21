#include <iostream>
#include <algorithm>
using namespace std;

struct student {
  string name;
  char region;
  int cost;
};

bool method(const student &a, const student &b) {
    return
    (
        (a.cost < b.cost) ||
        (a.cost == b.cost && a.region < b.region) ||
        (a.cost == b.cost && a.region == b.region && a.name < b.name)
    );
}

int main() {

    int N;
    cin >> N;
    student arr[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i].name >> arr[i].region >> arr[i].cost;
    }

    sort(arr, arr+N, method);

    for (int i = 0; i < N; i++) {
        cout << arr[i].name << endl;
    }

    return 0;
}
