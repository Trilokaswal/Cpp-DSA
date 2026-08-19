// % is a Modulus Operator it means it gives the remainder of a division operation. 
// For example, if you divide 10 by 3, the quotient is 3 and the remainder is 1.
// Therefore, 10 % 3 would yield 1.

#include <iostream>
using namespace std;
int main () {
    int a, b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << "Remainder : " << a % b;
    return 0;
}

// Dividend → Jis number ko divide kiya jaata hai. (20)
// Divisor → Jis number se divide kiya jaata hai. (4)
// Quotient → Division ke baad jo answer milta hai. (5)
// Remainder → Jo bach jaata hai agar division exact na ho.

//  formula:
             // Dividend=(Divisor×Quotient)+Remainder


// Properties of Modulus Operator:


// 1. The modulus (`%`) operator returns the remainder after dividing one integer by another.**

// 2. The modulus operator works only with integer data types (`int`, `long`, etc.)
//  and cannot be used with `float` or `double` values.**

// 3. If the dividend is smaller than the divisor, the remainder is the dividend itself.**
//    *Example:* `3 % 5 = 3`

// 4. If the dividend is exactly divisible by the divisor, the remainder is `0`.**
//    *Example:* `20 % 5 = 0`

// 5. The divisor must not be zero, because using `%` with `0` results in undefined 
// behavior (runtime error).**

// 6. In C++, the sign of the remainder is the same as the sign of the dividend.**
//    *Example:* `-10 % 3 = -1` and `10 % -3 = 1`

// 7. The modulus operator is commonly used to check whether a number is even or odd.**

// 8. The modulus operator is used to test whether a number is divisible by another number.**

// 9. The modulus operator is useful for extracting digits from a number.**
//    *Example:* `123 % 10 = 3`

// 10. The relationship between division and modulus is:**
//     **Dividend = (Divisor × Quotient) + Remainder**
