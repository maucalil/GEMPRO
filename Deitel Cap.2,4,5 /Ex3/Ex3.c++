#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n1{0}, n2{0}, n3{0}; // declaração e inicialização a 0 das variáveis a receberem os valores

    cout << "Digite 3 valores: "; // pede 3 valores ao usuário
    cin >> n1 >> n2 >> n3; // coloca os 3 valores nas variáveis

    if ( n1 == 0 || n2 == 0 || n3 == 0) { // checa que nenhum lado tenha valor 0

       cout << "Valores inválidos\n";
    }

    else if ( n1 + n2 > n3 && n3 > abs(n1 - n2) || n1 + n3 > n2 && n2 > abs(n1 - n2) || n2 + n3 > n1 && n1 > abs(n1 - n2)) { // checa se os números formam um triângulo
        
        if ( (n1*n1) + (n2*n2) == (n3*n3) || (n1*n1) + (n3*n3) == (n2*n2) || (n3*n3) + (n2*n2) == (n1*n1) ){ // checa se os números formam um triângulo

            cout << "Os valores correspondem aos lados de um triângulo retângulo.\n";
        }

        else { // checa se os números não formam um triângulo retângulo
            cout << "Os valores não são de um triângulo retângulo.\n";
        }
    }

    else { // os valores não formam um triângulo
        "Os valores não formam um triângulo\n";
    }

    return 0;

}