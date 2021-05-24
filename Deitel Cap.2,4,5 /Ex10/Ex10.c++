#include <iostream>

using namespace std;

int main() {

    int n;
    int even{0}, odd{0}, positive{0}, negative{0};

    for (int i{0}; i < 5; i++) {

        cout << "Digite um número: ";
        cin >> n;

        if (n % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }

        if (n > 0) {
            positive++;
        }
        else {
            negative++;
        }
    }

    cout << "\nPares: " << even << "\nÍmpares: " << odd << "\nPositivos: " << positive << "\nNegativos: " << negative << endl;

    return 0;
}