#include <iostream>
using namespace std;

unsigned  int soma(unsigned int num);

int main() 
{
    int n;

    cout << "Digite a quantidade de números n a serem somados: ";
    cin >> n;

    cout << "Soma = " << soma(n) << endl;
}
unsigned  int soma(unsigned int num)
{

    if (num == 0)
    {
        return num;
    }
    else
    {
        return num + soma(num -1);
    }
}