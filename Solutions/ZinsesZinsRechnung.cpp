// Calculate interest rate with compound interest

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double kapital, zinssatz, zinsen;
    int laufzeit;

    cout << "Kapital: ";
    cin >> kapital;
    cout << "Zinssatz: ";
    cin >> zinssatz;
    cout << "Laufzeit: ";
    cin >> laufzeit;

    zinsen = kapital * pow(1 + zinssatz / 100, laufzeit) - kapital;
    cout << "Zinsen: " << zinsen << endl;

    return 0;
}

