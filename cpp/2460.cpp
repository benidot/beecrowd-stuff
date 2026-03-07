#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int cases; cin >> cases;
    vector<int> v;
    for (int i = 0; i < cases; i++) {
        int temp; cin >> temp;
        v.push_back(temp);
    }
    int removals; cin >> removals;
    for (int i = 0; i < removals; i++) {
        
        int temp; cin >> temp;
        v.erase(find(v.begin(), v.end(), temp));

    }

    for (int i = 0; i < v.size(); i++) {
        if(i) cout << " ";
        cout << v[i];
    }

    cout << endl;

}