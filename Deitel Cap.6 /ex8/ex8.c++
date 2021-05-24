#include <iostream>
#include <ctime>
using namespace std;

int randN();

int main() 
{
    srand(static_cast<unsigned> (time(0)));

    int random, n;
    random = randN();

    cout << random << "Tente adivinhar um número entre 1 a 100: ";
    cin >> n;
    cout << n<< "\n";

    if (n != random)
    {
        do 
        {
            if ( n > random) 
            {
                cout << "Muito alto, tente novamente: ";
            }
            else 
            {
                cout << "Muito baixo, tente novamente: ";
            }
            cin >> n;
            cout << "\n";

        } while (n != random);
    }
    else 
    {
        cout << "Parabéns, você acertou!" << endl;
    }    
    return 0;
}

int randN() 
{
    unsigned int randomN(1 + rand() % 100);
}