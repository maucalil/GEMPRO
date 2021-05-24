#include <iostream>
using namespace std;

unsigned long fibonacci(unsigned long num);

int main() 
{
    unsigned long n{0};

    cout << "Digite quantos números terão a sequência de Fibonacci: ";
    cin >> n;

    cout << "O número " << n << " da sequência é " << fibonacci(n) << "." << endl;
}

unsigned long fibonacci(unsigned long num) 
{
    int fib1 = 0, fib2 = 1;

    if ( num == 1)
    {
        return fib1;
    }
    else if ( num == 2)
    {
        return fib2;
    }
    else 
    {
        return (fibonacci(num - 1) + fibonacci(num - 2));
    }
}