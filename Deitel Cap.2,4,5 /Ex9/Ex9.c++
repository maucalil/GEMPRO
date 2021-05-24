#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double n1, n2, M;

    cout << "Digite 2 notas: ";
    cin >> n1 >> n2;

    M = (n1 + n2) / 2;

    cout << "Sua média é " << setprecision(2) << M << " e você está ";

    if (M >= 0 && M < 4) {
        cout << "reprovado.";
    }
    else if (M >= 4 && M < 7) {
        cout << "de exame.";
    }
    else {
        cout << "aprovado.";
    }

    cout << "\n";
    return 0;
}