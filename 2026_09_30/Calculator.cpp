#include <iostream>
using namespace std;


int main() {

    double operand1;
    double operand2;

    cout << "Enter the first number: ";
    cin >> operand1;

    cout << "Enter the second number: ";
    cin >> operand2;

    double sum = operand1 + operand2;

    double subtraction = operand1 - operand2;

    double product = operand1 * operand2;

    double quotient = operand1 / operand2;

    cout << "My two number are: " << operand1 << " and " << operand2 << endl;

    cout << "The sum is " << sum << endl;

    cout << "The subtraction is " << subtraction << endl;

    cout << "The product is " << product << endl;

    cout << "The quotient is " << quotient << endl;

    return 0;
}