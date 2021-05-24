#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    const double n1{234.345};
    const double n2{45.698};
    
    cout << fixed;

    cout << setprecision(6) << n1 << " - " << n2 << endl; // print with precision 6 on decimal

    cout << setprecision(0) << n1 << " - " << n2 << endl; // print with precision 0
    
    cout << setprecision(1)  << n1 << " - " << n2 << endl; // print with precision 1

    cout << setprecision(2) << n1 << " - " << n2 << endl; // print with precision 2

    cout << setprecision(3) << n1 << " - " << n2 << endl; // print with precision 3

    cout << scientific << n1 << " - " << n2 << endl; // print in scientific notation with 'e'

    cout << uppercase << scientific << n1 << " - " << n2 << endl; // print in scientific notation with 'E'

    cout << setprecision(0) << n1 << " - " << n2 << endl; // print the shortest way

    return 0;
}