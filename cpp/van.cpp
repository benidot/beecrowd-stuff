#include <iostream>
#include <vector>
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
    while(cin >> N) {
        vector<student> arr;

        for (int i = 0; i < N; i++) {
            student temp;
            cin >> temp.name >> temp.region >> temp.cost;
            arr.push_back(temp);
        }

        sort(arr.begin(), arr.end(), method);

        for (student i : arr) {
            cout << i.name << endl;
        }

    }

    return 0;
}
