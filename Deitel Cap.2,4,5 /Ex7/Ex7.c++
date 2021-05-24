// Passos exatamente os do da lista
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

    double A, B, C, delta; 
    int X;

    cout << "Digite 4 valores para A, B, C e X, respectivamente: ";
    cin >> A >> B >> C >> X;

    // checa as condições dadas em cada lista
    switch (X) {

        case 1:
        // calcula as raízes de um equação quadrática por delta
            delta = (B*B) - (4*A*C);
            double r1, r2;

            if ( delta  >= 0 )   {

                r1 = (-B + sqrt(delta)) / (2*A);
                r2 = (-B - sqrt(delta)) / (2*A);

                cout << "A equação dada é " << A << "x² + " << B << "x + " << C;
                cout << " e suas raízes são " << r1 << " e " << r2 << "." << endl;
            }
            else {

                cout << "A equacão nao possui solucões reais."; 
            }
            break;
        
        case 2:
            if ( A == 0 || B == 0 || C == 0) { // checa que nenhum lado tenha valor 0

                cout << "Valores inválidos para um triângulo\n";
            }
            else if ( A + B > C && C > abs(A - B) || A + C > B && B > abs(A - C) || B + C > A && A > abs(B - C)) {

                double área, p; // define a variável área e semiperímetro do triângulo
                p = ((A + B + C) / 2);
                área =  sqrt(p*(p-A)*(p-B)*(p-C));

                cout << "Os valores formam um triângulo e sua área é de " << área << "." << endl;
            }
            break;

        case 3:   
        //calcula área do trapézio  
            if (A > 0 && B > 0 && C > 0) {
                double área;
                área = ( ( (A+B) * C) / 2);
                cout << "A área do trapézio é de " << área << endl;
            }
            else {
                cout << "Valores inválidos.";
            }
            break;
        
        case 4:
        // calcula as resistências em serie e em paralelo
            if (A > 0 && B > 0 && C > 0) {
                double rs, rp; // declara as varias resistência em serie e em paralelo

                rs = A + B + C;
                rp = ((( (A + B) / 2) + C) / 2);

                cout << "A resistência em série é de " << rs << " Ohms." << endl;
                cout << "A resistência em paralelo é de " << rp << "  Ohms." << endl;
            }
            else {
                cout << "Valores inválidos.";
            }
            break;
        
        default:
        // print an error message if none of previous case is satisfied
            cout << "Erro. Valor de X não condiz com nenhum caso.";
            break;

    }

    return 0;
}