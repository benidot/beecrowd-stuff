#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    int cases;
    cin >> cases;
    
    for (int i = 0; i < cases; i++) {
        int ints, final; final = 0;
        cin >> ints;
        vector<int> intv, unordered;
        for (int i = 0; i < ints; i++) {
            int temp; cin >> temp;
            intv.push_back(temp);
            unordered.push_back(temp);
        }
        sort(intv.rbegin(), intv.rend());
        for (int i = 0; i < intv.size(); i++) {
            if (intv[i] == unordered[i]) {
                final++;
            }
        };
        cout << final << endl;
        
    }
    
    return 0;
}