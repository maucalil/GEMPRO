#include <iostream>

using namespace std;

int main() {

    int ano{0}; // declara e inicializa a variável que guardará o ano de nascimento digitado

    cout << "Em qual ano você nasceu?\n"; // pergunta qual o ano de nascimento do usuário
    cin >> ano; // atribui esse valor a variável ano

    if ( (2021 - ano) >= 18 ) { // checa se o usuário tem 18 ou mais anos e pode votar

        cout << "Você pode votar esse ano.\n"; // printa que o usuário pode votar
    }

    else { // checa que o usuário não pode votar

        cout << "Você não pode votar esse ano.\n"; // printa que o usuário não pode votar
    }

    return 0; // encerra a função main
}