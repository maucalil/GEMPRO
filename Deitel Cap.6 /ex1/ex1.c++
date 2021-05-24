#include <iostream>
using namespace std;

int main() 
{
    int soma{0}, i;
    for(i = 1; i <= 10; i++)
    {
        soma += i;
    }

    cout << "Soma = " << soma << endl;
    
    return 0;
}