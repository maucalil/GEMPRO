// prompt user simple program
#include <iostream> // enable program to perfom inputs/outputs

using namespace std;
//initialize main function
int main() {
    // declaring and initializing variables
    int n1{0}; // first int to add, initalized to 0
    int n2{0}; // second int to add, initalized to 0
    
    // prompt user for 2 numbers and add it on n1 and n2 respectively
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    // the 3 subsequent comparations compare n1 and n2 
    if (n1 > n2) {
        cout << n1 << " é maior que " << n2 << endl;
    }

    else {
        if (n1 < n2) {
            cout << n1 << " é menor que " << n2 << endl;
        }  

        else {
            cout << n1 << " é igual a " << n2 << endl;
        } 
    }
    
    return 0;
}

