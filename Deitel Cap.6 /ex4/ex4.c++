#include <iostream>
using namespace std;

int main()
{
    int M[3][3], num{1};

    for (int i = 0; i < 3; i++)
    {
        cout << "\n";
        
        for (int j = 0; j < 3; j++)
        {   
            M[i][j] = num;
            num++;
            cout << M[i][j] << " ";
        }
    }   
    cout << "\n";
}