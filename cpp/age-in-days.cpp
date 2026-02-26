#include <iostream>
using namespace std;

int main() {
    int inp = 0;
    int years = 0;
    int months = 0;
    int days = 0;
    cin >> inp;
    while (inp >= 365) {inp -= 365; years++;};
    while (inp >= 30) {inp -= 30; months++;};
    while (inp >= 1) {inp--; days++;};
    cout << years << " ano(s)\n" << months << " mes(es)\n" << days << " dia(s)\n";
}