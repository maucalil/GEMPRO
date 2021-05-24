#include <iostream>
using namespace std;

int fatorial(int n);

int main() 
{
    unsigned long long n;
    cout << "Digite o número que deseja saber o fatorial: ";
    cin >> n;

    cout << n << "! = " << fatorial(n) << endl;
}

int fatorial(int n)
{
    int fat = 1, i;

    for (i = 1; i <= n; i++)
    {
        fat *= i;
    }
    return fat;
}