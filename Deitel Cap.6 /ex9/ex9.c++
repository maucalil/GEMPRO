#include <iostream>
#include <cmath>
using namespace std ;

void second_degree_equation ( int a, int b, int c) {
    int delta = b*b - 4 *a*c;
    double value1{(-b + sqrt (delta)) / ( 2 *a)};
    double value2{(-b - sqrt (delta)) / ( 2 *a)};

    cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl ;

    if (delta > 0 ) {
    cout << "There are 2 real roots!\n" ;
    cout << "Its value are " << value1 << " and " << value2 <<
    '\n' ;
    }
    else if (delta == 0 ) {
    cout << "There is 1 real root!\n" ;
    cout << "Its value is " << value1 << endl ;
    }
    else {
    cout << "There are no real roots!\n" ;
    }
    cout << '\n' ;
}

int main () {
    double n1, n2, n3;
    
    cout << "Type the coefficients in any sequence you'd like!\n" ;
    cin >> n1 >> n2 >> n3;

    second_degree_equation(n1,n2,n3);
    second_degree_equation(n1,n3, n2);
    second_degree_equation(n2,n1, n3);
    second_degree_equation(n2, n3, n1);
    second_degree_equation(n3,n1, n2);
    second_degree_equation(n3,n2, n3);
}
