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

    /*
    using size_t
    
    */

    for(size_t i{0} ; i<375; i++){
        std::cout << i << "I love C++" << std::endl;
    }
    /*
    for for loops you can use the iterator i , you can mention the 
    datattype of the iterator and in curly braces the entry point of the iterator 
    say you want to loop from 5 to 10 or n to f(n),
    use i{n} i<f(n)
    
    */

    std::cout << "The size of size_t is: " << sizeof(size_t) << std::endl;

    /* using auto keyword
    */

    auto var0 {12};
    auto var1 {12.4325};
    auto var2 {"dewhavifkca"};

    std::cout << var0 << " " << var1 << " " << var2 << " " << typeid(var2).name() << std::endl;


    return 0;
}
/**

Three types of errors 
> Compile Time
> Run Time
> Warnings


*/
