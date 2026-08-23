#include <iostream>
using namespace std;

int main () {

    int age;
    cout << "Enter your Age: ";
    cin >> age;
    
    if (age >= 18)
      { cout << "You are eligible for a driving license";
        cout<< "But you need a driving liscense";}

    else 
        cout << " You are not eligible for a driving license";

    return 0;
}