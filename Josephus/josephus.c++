#include <bits/stdc++.h>
#include <cmath>
using namespace std;

long long josephus(int n);

int main() 
{
    int n;
    cout<<"Insira um quantidade de soldados: ";
    cin>>n;

    cout<<"O soldado ganhador esta na posicao: "<<josephus(n)<<"\n";
}

long long josephus(int n) 
{
    if ( n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        int l, count{0}, n1 = n; // l da fórmula de josephus 2l + 1 e i para contar a maior 
                        // potência de 2 que cabe no número
        
        for(int i = 0 ; n >= 2; ++i)    
        {       
            n = n/2;   // 15/2 = 7 7/2 = 3  3/2 = 1 count = 3  15 = 2^3 - l
            count++;
        }  
        
        l = n1 - pow(2,count);
        return l*2 + 1;
    }
}