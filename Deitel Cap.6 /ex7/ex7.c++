#include <iostream>
#include <ctime>
using namespace std;

int randN();

int main()
{
    srand(static_cast<unsigned> (time(0)));
    int M[100], n;

    cout << "Digite um número de 1 a 1000 para saber se ele está na array: ";
    cin >> n;

    for (int i = 0; i < 100; i++)
    {
        M[i] = randN();

        if (n == M[i])
        {
            cout << "O número " << n << " está na array e seu index é " << M[i] << endl;
            break;
        }
        else 
        {
            cout << "O número " << n << " não está na array." << endl;
            break;
        }
    }
}

int randN() 
{
    unsigned int randomN(1 + rand() % 1000);
}