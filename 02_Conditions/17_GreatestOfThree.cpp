#include <iostream>
using namespace std;
int main () {

   int a, b, c;
   cout << " Enter first number : ";
   cin>> a;

   cout << " Enter second number : ";
   cin >> b;

   cout << " Enter third number : ";
   cin >> c;

   if (a, b, c > 0) // a, b, c to be positive integer
   
   { 
    
    if (a > b & a > c)
    cout << a << " is the greatest integer ";
    
    else if ( b > c & b > a )
    cout << b <<  " is the greatest integer ";

    else cout << c <<  " is the greatest integer ";
   
   }
   
   else cout << " Please Enter a Positive integer "; 
   
   return 0;

   } 