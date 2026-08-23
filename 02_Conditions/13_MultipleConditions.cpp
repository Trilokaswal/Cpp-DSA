// we use multiple conditions using && and ||
// '&&' means "Logical and" which means 'intersection' 
// '||' means "Logical or" which means 'union'

// Take positive integer input and tell if it is a fout digit number or not.

#include <iostream>
using namespace std;
int main (){ 

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if ( n >= 1000 && n <= 9999) cout << "4 Digit number";
    else cout << "not a 4 digit number";

    return 0;

    // modify this code to get output for negative four digit numbers also
    
}
