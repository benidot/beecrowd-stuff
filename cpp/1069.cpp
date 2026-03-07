#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {

    int cases; cin >> cases;

    for (int i = 0; i < cases; i++) {
        string vein; cin >> vein;
        int op,d; op=d=0;
        for (int i = 0; i < vein.length(); i++) { // na vdd nem precisou de vector aqui quase q duplico o tamanho do programa pra tirar os pontos
            if (vein[i] == '<') {
                op++;
            }
            if (vein[i] == '>' && op > 0) { // todos meus homies odeiam stack 
                d++;
                op--;
            }
        }

        cout << d << endl;
    }

    return 0; // 15 anos de quebra cabeçando depois

}