#include <iostream>
using namespace std;

int main(){

    int x = 10;

// Post increment

    cout << x++ << endl; // output: 10
    cout << x << endl; // output: 11

    // now x = 11 due to increment

// Pre increment

    cout << ++x << endl; // output 12
    cout << x << endl; // output 12

    return 0;

}


// PRE-INCREMENT, POST-INCREMENT, PRE-DECREMENT AND POST-DECREMENT

// Increment (++) increases the value of a variable by 1, while Decrement (--) decreases the value by 1.

// 1. PRE-INCREMENT (++x)
// In pre-increment, the value is increased first, and then the updated value is used.

// Example:
// int x = 5;
// cout << ++x;

// Output: 6

// 2. POST-INCREMENT (x++)
// In post-increment, the current value is used first, and then the value is increased by 1.

// Example:
// int x = 5;
// cout << x++;

// Output: 5
// After this, x becomes 6.

// 3. PRE-DECREMENT (--x)
// In pre-decrement, the value is decreased first, and then the updated value is used.

// Example:
// int x = 5;
// cout << --x;

// Output: 4

// 4. POST-DECREMENT (x--)
// In post-decrement, the current value is used first, and then the value is decreased by 1.

// Example:
// int x = 5;
// cout << x--;

// Output: 5
// After this, x becomes 4.

// EASY RULE:
// Pre (++x / --x) → Change first, use later.
// Post (x++ / x--) → Use first, change later.