// This program demonstrates the use of the char data type in C++.

// The char data type is used to store single characters and is typically 1 byte in size.

// a, b, c, d, .... z

// A, B, C, D, .... Z

// 0, 1, 2, 3, .... 9

// Special characters like !, @, #, $, %, ^, &, *, (, ), etc.

// In C++, characters are represented using the ASCII (American Standard Code for Information Interchange) 
// encoding scheme.

// Each character is assigned a unique integer value in the ASCII table, 
// which allows computers to store and manipulate text data efficiently.

// The character 'A' has an ASCII value of 65, 'B' is 66, 'a' is 97, and so on.

// The character 'a' has an ASCII value of 97, 'b' is 98,' 'c' is 99, and so on.

// Special characters like '!' have an ASCII value of 33, '@' is 64, '#' is 35, and so on.

// The character '0' has an ASCII value of 48, '1' is 49, '2' is 50,'3 is 51, and so on.



//  IMPLICIT AND EXPLICIT TYPECASTING

// Typecasting means converting one data type into another data type.

// 1. Implicit Typecasting

// Compiler khud automatically ek data type ko doosre type mein convert karta hai.

// Example:

// int x = 10;
// float y = x;

// Yahan x ka type int hai, lekin y ka type float hai.

// C++ automatically:
// 10 (int) → 10.0 (float)

// Isliye ise implicit conversion kehte hain.

// 2. Explicit Typecasting

// Hum khud compiler ko bolte hain ki type convert karo.

// Example:

// float x = 10.5;
// int y = int(x);

// Yahan humne explicitly int(x) likha hai.

// So:
// 10.5 (float) → 10 (int)

// Decimal part remove ho gaya.

// ASCII Example:

// char ch = 'A';

// cout << ch;       // A
// cout << int(ch);  // 65

// int(ch) explicit typecasting hai because humne khud conversion bola.

// Whereas:

// char ch = 'A';
// int x = ch;

// Yahan compiler automatically char → int kar raha hai, so this is implicit typecasting.

// Remember:

// Implicit = Compiler karta hai automatically.
// Explicit = Programmer khud karta hai.