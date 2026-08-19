//Declaration of variables

#include <iostream>
using namespace std;
int main(){
    int x =10, y= x + 20, z = 20;
    cout << x + y + z << endl;
    return 0;
}
// This code is working because we have declared all the variables x, y, and z in a single line.

#include <iostream> 
using namespace std; 
int main(){  
int x = 10; 
    y = x + 20;
    z = 20; 
    cout<< x + y + z << endl; 
    return 0; 
} 
// this code is not working because we need to declare all variables

// we can declare them in single line like this int x = 10, y = 20, z = 30; 

// or we can declare them in separate lines like this :
//int x = 10;
//int y = 20; 
//int z = 30;


// Modification or reasignment of variables

#include <iostream>
using namespace std;
int main(){ 
int x = 20;
    x = x + 10; 
cout<< x << endl;
return 0;
}
// But this code is working because we're not declaring any new variable,
// we're just updating the value of the existing variable x. 
