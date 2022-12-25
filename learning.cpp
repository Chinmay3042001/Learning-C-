/***

This is a cpp learning course.
Uncomment code to run it or write new code at the bottom.

This is to learn OOP with C++ and learn DSA simultaneously.



*/


#include <iostream>
using namespace std;
#include <bitset>
#include "add.hpp"

int main(){
/**

standard I/O library usage
also learned Makefile

*/
    // std::cout << "Hello World"  << std::endl;
    
    // int a,b;
    // std::cout << "enter first number" << std::endl;
    // std::cin >> a ;
    // std::cout << "enter second number" << std::endl;
    // std::cin >> b ;

    // int s;
    // s = add(a,b);

    // std::cout << "the sum is: " << s << std::endl;

    // /*
    // using size_t
    
    // */

    // for(size_t i{0} ; i<375; i++){
    //     std::cout << i << "I love C++" << std::endl;
    // }
    // /*
    // for for loops you can use the iterator i , you can mention the 
    // datattype of the iterator and in curly braces the entry point of the iterator 
    // say you want to loop from 5 to 10 or n to f(n),
    // use i{n} i<f(n)
    
    // */

    // std::cout << "The size of size_t is: " << sizeof(size_t) << std::endl;

    /* using auto keyword
    */

    // auto var0 {12};
    // auto var1 {12.4325};
    // auto var2 {"dewhavifkca"};

    // std::cout << var0 << " " << var1 << " " << var2 << " " << typeid(var2).name() << std::endl;

    int age = 19;
    double gpa = 2.7;
    string name = "chinmay";
    int* array;
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;

    //cout << *(array + 1);

    /* lets mess around now */
    float data;
    int* data_stream;
    data = 1525345.41264;
    data_stream = (int*)&data;
    std::bitset<32> y(*data_stream);
    cout << y ;
    // cout << *(data_stream + 1 )<< endl;
    // cout << *(data_stream + 2 )<< endl;
    // cout << *(data_stream + 3 ) << endl;
    // cout << *(data_stream + 4 )<< endl;
    // cout << *(data_stream + 5 )<< endl;
    // cout << *(data_stream + 6 )<< endl;
    // cout << *(data_stream + 7 )<< endl;
  

//1001001101110100011001100001011
//1001001101110100011001100001011
    return 0;
}
/**

Three types of errors 
> Compile Time
> Run Time
> Warnings


*/
