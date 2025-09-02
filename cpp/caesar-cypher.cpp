#include <iostream>
#include <vector>
using namespace std;


int main() {

    int cases;
    cin >> cases;
    vector<string> decoded;

    for (int i = 0; i < cases; i++) {
        string pre;
        cin >> pre;
        int shift;
        cin >> shift;
        for (int i = 0; i < pre.length(); i++) {
            pre[i] -= shift;
            if (pre[i] < 65) {
                pre[i] += 26;
            }
        }
        decoded.push_back(pre);
    }

    for (int i = 0; i < cases; i++) {
        cout << decoded[i] << endl;
    }

    return 0;
}