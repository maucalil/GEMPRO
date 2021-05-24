#include <iostream>
using namespace std;

int main() 
{
    int neg;

    cout << "Digite um número negativo: ";
    cin >> neg;

    while (neg >= 0) 
    {
        cout << "Erro! O número digitado não é negativo. Tente novamente.\n";
        cout << "Digite um número negativo: ";
        cin >> neg;
    }

    cout << "Você digitou: " << neg << endl;
}