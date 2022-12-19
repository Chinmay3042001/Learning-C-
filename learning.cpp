/***

This is a cpp learning course.
Uncomment code to run it or write new code at the bottom.

This is to learn OOP with C++ and learn DSA simultaneously.



*/


#include <iostream>
//using namespace std;
#include "add.hpp"

int main(){
/**

standard I/O library usage
also learned Makefile

*/
    std::cout << "Hello World"  << std::endl;
    
    int a,b;
    std::cout << "enter first number" << std::endl;
    std::cin >> a ;
    std::cout << "enter second number" << std::endl;
    std::cin >> b ;

    int s;
    s = add(a,b);

    std::cout << "the sum is: " << s << std::endl;

    return 0;
}
/**

Three types of errors 
> Compile Time
> Run Time
> Warnings


*/
