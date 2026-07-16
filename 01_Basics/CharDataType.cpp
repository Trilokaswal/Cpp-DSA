// This program demonstrates the use of the char data type in C++.

// The char data type is used to store single characters and is typically 1 byte in size.

// a, b, c, d, .... z

// A, B, C, D, .... Z

// 0, 1, 2, 3, .... 9

// Special characters like !, @, #, $, %, ^, &, *, (, ), etc.

// In C++, characters are represented using the ASCII (American Standard Code for Information Interchange) encoding scheme.

// Each character is assigned a unique integer value in the ASCII table, which allows computers to store and manipulate text data efficiently.

// The character 'A' has an ASCII value of 65, 'B' is 66, 'a' is 97, and so on.

// The character 'a' has an ASCII value of 97, 'b' is 98,' 'c' is 99, and so on.

// Special characters like '!' have an ASCII value of 33, '@' is 64, '#' is 35, and so on.

// The character '0' has an ASCII value of 48, '1' is 49, '2' is 50,'3 is 51, and so on.



#include <iostream>
using namespace std;
int main() {

    char X = '+';
    int ascii = (int)X;     // explicit type casting to convert char to int
    
    // Convert char to its ASCII value
    
    cout << "ASCII '" << X << "' is: " << ascii << endl;
    return 0;
}

// Output:
// ASCII '+' is: 43