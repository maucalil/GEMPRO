// prompt user simple program
#include <iostream> // enable program to perfom inputs/outputs

//initialize main function
int main() {
    // declaring and initializing variables
    int n1{0}; // first int to add, initalized to 0
    int n2{0}; // second int to add, initalized to 0
    int avg{0}; // average of n1 and n2, initalized to 0
    
    // prompt user for data and add it on n1
    std::cout << "Enter the first number: ";
    std::cin >> n1;

    // prompt user for data and add it on n2
    std::cout << "Enter the second number: ";
    std::cin >> n2;

    avg = (n1 + n2)/2; // make the avarage of the numbers the user prompted

    std::cout << "This is the average: " << avg << std::endl; // print the average and end the line

    return 0; // end main
}