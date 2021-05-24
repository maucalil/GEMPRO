#include <iostream>

using namespace std;

int main() {

    int código;

    cout << "Digite o código do produto(de 1 a 15): ";
    cin >> código;

    switch (código) {

        case 1:
            cout << "O produto de código " << código << " é classificado como 'Alimento não-perecível'." << endl;
            break;
        
        case 2:
        case 3:
        case 4:
            cout << "O produto de código " << código << " é classificado como 'Alimento perecível'." << endl;
            break;
        
        case 5:
        case 6:
            cout << "O produto de código " << código << " é classificado como 'Vestuário'." << endl;
            break;
        
        case 7:
            cout << "O produto de código " << código << " é classificado como 'Higiene Pessoal'." << endl;
            break;
        
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            cout << "O produto de código " << código << " é classificado como 'Limpeza e Utensílios Domésticos'." << endl;
            break;
        
        default:
            cout << "Código inválido.\n";
            break;
    }

}