// ARITHMETIC OPERATIONS WITH int AND double

// In C++, the data types of the operands affect the type of the result. If both operands are int, the result is generally int. If at least one operand is double, the result is double.

// 1. MULTIPLICATION (*)

// int * int → int
// int * double → double
// double * int → double
// double * double → double

// Examples:

// int a = 5;
// int b = 2;
// cout << a * b;          // 10

// int x = 5;
// double y = 2.5;
// cout << x * y;          // 12.5


// 2. ADDITION (+)

// int + int → int
// int + double → double
// double + int → double
// double + double → double

// Example:

// int a = 5;
// double b = 2.5;
// cout << a + b;          // 7.5


// 3. SUBTRACTION (-)

// int - int → int
// int - double → double
// double - int → double
// double - double → double

// Example:

// int a = 5;
// double b = 2.5;
// cout << a - b;          // 2.5


// 4. DIVISION (/)

// int / int → int
// int / double → double
// double / int → double
// double / double → double

// Example:

// cout << 5 / 2;          // 2
// cout << 5.0 / 2;        // 2.5

// When both operands are int, C++ performs integer division and the decimal part is discarded.

// IMPORTANT RULE:

// If both operands are int → result is int.
// If at least one operand is double → result is double.

// This concept applies to +, -, *, and /, 
// but it is especially important in division because int / int removes the decimal part.