#include <iostream>
using namespace std;

// Functions Prototype

void displayValue(int num);




int main() {

    int num = 10;

    displayValue(num);
    cout << "num after display is " << num << endl;
  cout << "This is main " << endl;

    return 0;
}

void displayValue(int num)
{
    num = num - 5;
   cout << "The value is " << num << endl;
}


