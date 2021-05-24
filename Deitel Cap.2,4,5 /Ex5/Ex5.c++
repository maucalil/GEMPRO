// Calcula o IMC do usuário
#include <iostream>

using namespace std;

int main() {

    int peso{0}, IMC{0}; // declara e inicia as variáveis peso e imc
    double altura{0};

    // pergunta e atribui os valores do peso e altura do usuário em suas respectíveis variáveis
    cout << "Digite seu peso em kg: ";
    cin >> peso;
    cout << "Digite sua altura em metros: ";
    cin >> altura;

    IMC = peso / (altura * altura); // calcula o IMC do usuário

    cout << "Seu IMC é " << IMC << ". Portanto, você é avaliado como ";
    
    // os ifs a seguir checam em qual faixa do IMC o usuário se encontra e prompta os resultados para ele
    if (IMC < 20) {
        cout << "abaixo do normal.";
    }
    else if (IMC < 25 && IMC >= 20) {
        cout << "normal.";
    }
    else if (IMC < 30 && IMC >= 25) {
        cout << "sobrepeso.";
    }
    else if (IMC < 35 && IMC >= 30) {
        cout << "obesidade leve";
    }
    else if (IMC < 40 && IMC >= 35) {
        cout << "obesidade moderada.";
    }
    else {
        cout << "obesidade mórbida.";
    }

    cout << "\n";

    return 0; // encerra a função main
}