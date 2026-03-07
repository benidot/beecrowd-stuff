#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() { // percebi agora q tu ve esses comentario ne professor agora vou usar mais 

    int cases = 1;

    while(true) {
        int marbles,queries; cin >> marbles >> queries;
        if (marbles == 0 && queries == 0) {
            return 0;
        }

        vector<int> nums;

        for (int i = 0; i < marbles; i++) {
            
            int temp; cin >> temp;
            nums.push_back(temp);

        }

        sort(nums.begin(), nums.end()); // eu me matando tentando entender e n vi que tinha q dar sort ate agora RAAAHH

        

        for (int i = 0; i < queries; i++) {
            int q; cin >> q; bool found = false;

            if(i == 0) {
                cout << "CASE# " << cases << ":\n"; cases++; // PELO AMOR DE DEUS DEIXA EU BOTAR O ESPACINHO ALI MANO TU NAO MORRE SE TIVER UM ESPACINHO DEPOIS DOS DOIS PONTOS
            }

            auto it = lower_bound(nums.begin(), nums.end(), q); // jesus cristo essa desgraca de binary search

            if(it != nums.end() && *it == q) {
                int pos = it - nums.begin() + 1;
                cout << q << " found at " << pos << endl;
            } else {
                cout << q << " not found\n";
            }

        }

    }

    return 0;
}