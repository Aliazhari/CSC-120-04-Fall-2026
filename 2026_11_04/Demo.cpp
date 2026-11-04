#include <iostream>
using namespace std;

void swap(int, int);



void divide(int num, int deno)
{
    if (deno == 0)
        return;

    int result = num / deno;
    cout << "The quotient is " << result << endl;
}

void swap(int x, int y)
{
    cout << "Before swapping inside swap function" << endl;
    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;
    int temp = x;
    x = y;
    y = temp;
    cout << "Before swapping inside swap function" << endl;
    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;
}

int sum(int num1, int num2)
{
  
    return num1 + num2;
}

// void changegVar() {
//     gVar = 20;
// }

int main()
{

   int gVar1;
 int gVar2;
 int gVar3;
 int gVar4;
 
   
  

    cout << "gVar1 in main " << gVar1 << endl;
    cout << "gVar2 in main " << gVar2 << endl;
    cout << "gVar3 in main " << gVar3 << endl;
    cout << "gVar4 in main " << gVar4 << endl;

    // changegVar();

    // cout << "gVar in main after calling changgVar: " << gVar << endl;

    // int x = 10;
    // int y = 20;

    // cout << sum(x, y) << endl;
    // divide(x, y);

    // cout << "Before the swap in main" << endl;
    // cout << "X: " << x<< endl;
    // cout << "Y: " << y << endl;

    // swap(x, y);

    //   cout << "After the swap in main" << endl;
    // cout << "X: " << x<< endl;
    // cout << "Y: " << y << endl;
}