#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int randN();

int main()
{
    srand((unsigned int) (time(0)));
    int M[5][5], soma{0};

    for (int i = 0; i < 5; i++)
    {
        cout << "\n";
        
        for (int j = 0; j < 5; j++)
        {   
            M[i][j] = randN();
            cout << setw(3) << M[i][j] << setw(3);
            
            if(i == j)
            {
                soma += M[i][j];
            }
        }
    }
    cout << "\n\n" << "A soma dos elementos da diagonal principal dessa matriz é: " << soma << endl;
}

int randN() 
{
    unsigned int randomN{1 + (rand() % 10)};
    return randomN;
}