#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    vector<int> f;
    for(int i = 0; i < 3; i++) {
        int tmp;
        cin >> tmp;
        f.push_back(tmp);
    }
    sort(f.begin(), f.end());
    cout << f[2] << " eh o maior" << endl;
}