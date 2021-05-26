#include <bits/stdc++.h>
using namespace std;

string josephus(int n);
string toBinary(int n);
int toDecimal(string bin);

int main()
{
    int soldiers;
    cout << "Insira a quantidade de solados: ";
    cin >> soldiers;

    string winner = josephus(soldiers);

    cout << "O soldado ganhador será o " << toDecimal(winner) << ".\n";
    
    return 0;
}


string josephus(int n) // aplica o problema de josephus para n soldados
{
    string w = toBinary(n) + 'x';
    int i = 0, j = w.size()-1;
    char aux;
    aux = w[i];
    w[i] = 0;
    w[j] = aux; 
    
    return w;
}

string toBinary(int n) // converte  n de decimal para binário
{
    int i, s[64];
    string bin;

    for(i=0; n>0; i++)    
    {    
        s[i] = n%2;    
        n= n/2;  
    }   

    for(i=i-1 ; i>=0 ;i--)    
    {   
        bin += to_string(s[i]);
    }   
    return bin;    
}  

int toDecimal(string bin) // converte bin de binário para decimal
{
    int size = bin.size(), dec{0};

    for(int i = 0; i < size; ++i)
    {
        if(bin[i] == '1')
        {
            dec += pow(2, size - 1 - i);
        }
    }
    return dec;
}




