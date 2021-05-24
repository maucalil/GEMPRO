#include <iostream>
using namespace std;

int fibonacci(int n);

int main() 
{
    int n{0};

    cout << "Digite quantos números terão a sequência de Fibonacci: ";
    cin >> n;

    cout << "O número " << n << " da sequência é " << fibonacci(n) << "." << endl;
}

int fibonacci(int n) 
{
    int i, fib1 = 0, fib2 = 1, fib;
    
    if ( n == 1)
    {
        return fib1;
    }
    else if ( n == 2)
    {
        return fib2;
    }
    else 
    {
        for (i = 3; i <= n; i++)
        {
            fib = fib1 + fib2;
            fib1 = fib2;
            fib2 = fib;
        }  
        return fib2;
    }
}