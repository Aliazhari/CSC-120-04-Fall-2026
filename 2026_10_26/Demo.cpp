/**
  @Author: Ali Azhari
  @File: Demo.cpp
  @Date: 10/26/2026
  @Brief: This is a tutorial for a for, whie
           and do while
*/

#include <iostream>
using namespace std;

void menu()
{
    cout << "    ========================== " << endl;
    cout << "    NUMBER CHALLENGE" << endl;
    cout << "   ========================== " << endl;
    cout << "1. Guess a Number" << endl;
    cout << "2. Even or Odd" << endl;
    cout << "3. Grade Evaluator" << endl;
    cout << "4. Exit" << endl;
    cout << "==========================" << endl;
}

int getChoice() {
    int c;
  cout << "Enter your choice: ";
    cin >> c;
   return c;
}

int main()
{
    int choice;
    do {
    menu();
    choice = getChoice();
  
    } while (choice != 4);

    cout << "Ooff finally you types 4" << endl;
    return 0;
}