// in CPP, sequence of arithmetic operations is determined by the BODMAS rule.
// BODMAS stands for Brackets, Order, Division, Multiplication, Addition, and Subtraction.

// This means that operations inside brackets are performed first, 

// expression at the left most is evaluated first, if it is division or multiplication.
// and then the operations are performed in the order of precedence.

// then we'll proceed with the normal BODMAS rule, which is as follows:
// Bracket, Order (exponents), Division, Multiplication, Addition, and Subtraction.

#include <iostream>
using namespace std;
int main (){

    cout << 2/3 * 6 << endl; // 0
    cout << 2 * 6/3 << endl; // 4

    cout << 2 * 6/3 + 5 << endl; // 9
    cout << 2 + 3 * 4 << endl; // 14
    
    return 0;
}