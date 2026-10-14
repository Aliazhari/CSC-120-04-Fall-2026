#include <iostream>

using namespace std;

int main()
{

    char choice;

    cout << "Choose a transaction: \n";
    cout << "A. balance\n";
    cout << "B. Deposit\n";
    cout << "C. Withdraw\n";

    
    cin >> choice;

    switch (choice)
    {
    case 'A':
        cout << "Your balance\n";
        break;
    case 'B':
        cout << "Depositing   \n";
        break;
    case 'C':
        cout << "Withdrawing\n";
        break;
    default:
        cout << "Invalid Choice\n";
    }
}