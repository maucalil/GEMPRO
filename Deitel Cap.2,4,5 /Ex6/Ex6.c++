// Calcula média de notas de aluno
#include <iostream>

using namespace std;

int main() {

    double n1{0}, n2{0}, n3{0}, me{0}, ma{0}; // declara e inicializa as variáveis que receberão as notas e a média dos exercícios e de aproveitamento

    cout << "Digite suas 3 notas e a média dos exercícios: ";
    cin >> n1 >> n2 >> n3 >> me;

    ma = ( (n1*1 + n2*2 + n3*3 + me) / 7);

    cout << "Sua média de aproveitamento é " << ma << " e seu conceito é "; 

    // testa as condições para printar o conceito do aluno
    if (ma >= 9) {
        cout << "a.";
    }

    else if (ma >= 7.5 && ma < 9) {
        cout << "b.";
    }

    else if (ma >= 6 && ma < 7.5) {
        cout << "c.";
    }

    else {
        cout << "d.";
    }

    cout << "\n";

    return 0;
}