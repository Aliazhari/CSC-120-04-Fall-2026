#include <iostream>

using namespace std;

int main() {
    int num1;
    int  num2;
    int sum;
    int subtraction;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    sum = add(num1, num2);
    cout << "The sum is " << sum << endl;

    subtraction = subtract(num1, num2);
    cout << "The subtraction is " << subtract << endl;

    int product = num1 * num2;
     cout << "The product is " << product << endl;

     int division = num1 / num2;
     cout << "The division is " << division << endl;


     return 0;

}

int add(int a, int b) {

    int result = a + b;
    return result;
}
int subtract(int a, int b) {

    int result = a - b;
    return result;
}