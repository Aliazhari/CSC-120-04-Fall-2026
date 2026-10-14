#include <iostream>

using namespace std;

int main() {


    string pass;

    int score = 65;

    if (score >= 90) 
        pass = "Excellent";
    else
        if (score > 70) 
        pass = "Good";
    else
        pass = "Failed";

   pass =  (score >= 90)? "Excellent" :  (score > 70)? "Good" : "Failed";    

    cout << pass << endl;

    return 0;
}