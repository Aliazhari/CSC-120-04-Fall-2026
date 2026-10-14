#include <iostream>
#include <ctime>

using namespace std;

int main() {

   srand(time(0));

    int secretNumber1 = rand() % 100 + 1;
     int secretNumber2 = rand() % 100 + 1;

    cout << secretNumber1 << endl;
     cout << secretNumber2 << endl;

    return 0;
}