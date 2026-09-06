#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter number of term for the AP: " ;
    cin >> n;
    
    
    for ( int i = 1 ; i <= n ; i++) 
    {
         cout << 3*i - 1 << " ";     // An = 2 + (n-1)*3 = 3n - 1
    }   
    return 0;
}